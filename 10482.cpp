#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;
int no_candy; // 0 < no_candy <=32
int sum = 0;
int candy[35];
int solution[675][675];

void input(){
    sum = 0;
    for (int i = 1; i <= no_candy; i++) {
        cin >> candy[i];
        sum += candy[i];
    }
}

int searchMin(int a, int b, int c){
    return max(max(a,b),c)-min(min(a,b),c);
}

int solve(){
    int minimum = 999999;
    memset(solution, 0, sizeof(solution));
    solution[0][0] = 1;
    for (int i = 1; i <= no_candy; i++) {
        for (int j = sum; j >= 0 ; j--) {
            for (int k = sum; k >= 0 ; k--) {
                if (solution[j][k]){
                    solution[j+candy[i]][k] = 1;
                    solution[j][k+candy[i]] = 1;
                }
            }
        }
    }
    for (int j = 0; j <= sum; j++) {
        for (int k = 0; k <= sum ; k++) {
            if (solution[j][k]){
                minimum = min(minimum, searchMin(j, k, sum-j-k));
            }
        }
    }
    return minimum;
}

void output(int cases){
    cout << "Case " << cases << ": "  << solve() << endl;
}

int main() {
    int testcase;
    while(cin >> testcase){
        // i must be 1 for output the correct case number
        for (int i = 1; i <= testcase; i++) {
            cin >> no_candy;
            input();
            output(i);
        }
    }
    return 0;
}