#include <iostream>
#include <cstring>

using namespace std;

// dp[i][j] // commands needed to form a pali... from position i to position j
// initialization all elements as -1
// dp[i][j] = 0 , j-i<2 (size is < 2)
// dp[i][j] = dp[i+1][j-1] , str[i]==str[j]
// dp[i][j] = Min(dp[i+1][j-1],dp[i+1][j],dp[i][j-1])+1 , str[i]!= str[j]

char str[1001]; // save the string input by user
int dp[1001][1001];
int find(int i, int j){
    if(dp[i][j] == -1){
        // length of str is <= 2
        if (i >= j){
            dp[i][j] = 0;
        }
        else{
            if (str[i] == str[j]){
                dp[i][j] = find(i+1,j-1);
            }
            else{
                // min function cannot be used , maybe I need to declare a new function
                dp[i][j] = min(min(find(i+1,j-1),find(i+1,j)),find(i,j-1))+1;
            }
        }
    }
    return dp[i][j];
}

int main() {
    int t; // number of testcase
    int cases = 1;
    cin >> t;
    // add this from the reference in the internet
    // if i do not add this , result will appear after I have input the number of testcase
    cin.getline(str, 1001);
    for (int no = 0; no < t; no++) {
        cin.getline(str, 1001);
        // declare and reserve space for dp
        memset(dp, -1, sizeof(dp));
        // use sizeof(str)/sizeof(str[0]) --> length of array is not ok (Answer not right)
        cout << "Case " << cases << ": " << find(0, strlen(str)-1);
        cases++;
        cout << endl;
    }

    return 0;
}