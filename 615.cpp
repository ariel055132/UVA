#include <iostream>
#include <vector>
using namespace std;

const int maximum = 100000; // maximum 100000 nodes
vector<int> graph[maximum+1]; // build the graph according to the input
bool isNode[maximum+1];
int in[maximum+1]; // in-degree of the node
bool visit[maximum+1]; //traversal the tree
bool istree; // it it a tree??

void dfs(int u){
    visit[u] = true;
    for (int i = 0; i < graph[u].size(); i++) {
        int v = graph[u][i];
        if(visit[v]){
            istree = false;
            return;
        }
        dfs(v);
        if(istree== false){
            return;
        }
    }
}
int main() {
    int cases = 1;
    int u,v; // u -> starting nodes, v -> finishing nodes
    while(cin >> u >> v){
        if (u < 0 && v < 0){
            break;
        }
        // initialize the vector and arrays
        for (int i = 1; i <= maximum ; i++) {
            graph[i].clear();
            isNode[i] = false;
            in[i] = 0;
            visit[i] = false;
        }
        // input nodes are not 0, input to the graph vector
        while(u!=0 && v!=0){
            graph[u].push_back(v);
            isNode[u] = isNode[v] = true;
            in[v]++; // the in-degree of finishing node ++
            cin >> u >> v;
        }
        istree = true;

        for (int i = 1; i < maximum; ++i) {
            if (isNode[i] && in[i] == 0){
                dfs(i);
                break;
            }
        }

        for (int i = 1; i < maximum; i++) {
            if (isNode[i] && !visit[i]){
                istree = false;
                break;
            }
        }

        //output the result
        cout << "Case " << cases << " ";
        if(istree == true){
            cout << "is a tree.";
        }
        else{
            cout << "is not a tree.";
        }
        cout << endl;
        cases++;
    }
    return 0;
}