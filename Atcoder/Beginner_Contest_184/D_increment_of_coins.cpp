#include <iostream>
#include <iomanip>

using namespace std;

double dp[105][105][105] = {0};

double dfs(int i, int j, int k) {
    if (i == 100 || j == 100 || k == 100) return 0;
    if (dp[i][j][k]) return dp[i][j][k];
    // calculate expected value
    dp[i][j][k] += (double)i/(i+j+k)*(dfs(i+1,j,k)+1);
    dp[i][j][k] += (double)j/(i+j+k)*(dfs(i,j+1,k)+1);
    dp[i][j][k] += (double)k/(i+j+k)*(dfs(i,j,k+1)+1);
    return dp[i][j][k];
}

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    cout << fixed << setprecision(9) << dfs(a,b,c) << endl;
    return 0;
}