#include <iostream>
#include <cstring>
using namespace std;

int n, m; // no of points, no of routes/relationship
int min_ans=50; // answer that will going to output, set 50 to avoid
int graph[40][40]; // store the relationship between points
int visit[40]; // visited
int max_ans[40];

//判断如果当前已经建立的station超过了最小值就return
//判断如果在当前结点建立了station后，并没有增加station的覆盖度，就不再建立
//如果当前结点是 i ,小于 i 的结点如果没有被覆盖且它的最大连结点小于i，就return；

// current point, no of selected station, no of point has covered
void dfs(int current_pt, int num_station, int covered_pt){
    // > the current min value, stop the searching
    if (num_station>min_ans){
        return;
    }
    // covered all nodes, record the no of station
    if (covered_pt >= n){
        if (num_station<min_ans){
            min_ans = num_station;
            return;
        }
    }
    // check the node before current node,
    for (int i = 1; i <= current_pt ; i++) {
        if (!visit[i] && max_ans[i]<current_pt){
            return;
        }
    }
    dfs(current_pt+1, num_station, covered_pt);

    int flag[40], k=0;
    for (int i = 1; i <= n ; i++) {
        if (!visit[i] && graph[current_pt][i]){
            flag[k++] = i; // calculate the current point has how many not covered neighbours
            visit[i] = 1;
        }
    }
    if (!k) return; // all neighbours are covered, stop next searching
    dfs(current_pt+1, num_station+1, covered_pt+k);

    // backtracking
    for (int i = 0; i < k; i++) {
        visit[flag[i]] = 0;
    }

}

void initialization(){
    min_ans = 50;
    memset(visit, 0, sizeof(visit));
    memset(max_ans, 0, sizeof(max_ans));
    for (int i = 1; i <= n ; i++) {
        for (int j = 1; j <= n; ++j) {
            graph[i][j] = graph[j][i] = 0;
        }
        graph[i][i] = 1;
    }
}

int main(){
    while (cin >> n >> m){
        if (n == 0 && m == 0){
            break;
        }
        initialization();
        // enter the relationship between each points
        for (int i = 0; i < m; ++i) {
            int pt1, pt2; // starting station and ending station
            cin >> pt1 >> pt2;
            // bi-directed graph
            graph[pt1][pt2] = 1;
            graph[pt2][pt1] = 1;
        }
        for (int i = 1; i <= n ; i++) {
            int maxv = -1;
            for (int j = 0; j <= n ; j++) {
                if (graph[i][j] && j > maxv){
                    maxv = j;
                }
            }
            max_ans[i] = maxv;
        }
        dfs(1, 0, 0);
        cout << min_ans << endl;
    }
    return 0;
}