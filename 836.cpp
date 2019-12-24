#include <iostream>
#include <cstring>
using namespace std;

/* 1.首先逐行累加每个1。意义是得到连续1的高度
 * 每个单元格子表示1的高度是多少，接下来枚举宽度
 * 2.计算每个格子左侧和右侧连续且高度大于等于当前格子的格子数数是多少
 */

int input[30][30]; // 2d matrix to store input from user, 25 * 25 at maximum
int dp[30][30]; // save the element after doing calculation and count the elements, check the answer is correct or not
string inputed;
int main() {
    int testcase; // the number of the cases following
    cin >> testcase;
    cin.ignore(); // this line is followed by a blank line
    for (int i = 0; i < testcase; i++) {
        // a blank line between two consecutive inputs
        if (i > 0){
            cout << endl;
        }
        memset(input, 0, sizeof(input)); // initialize matrix input
        cin >> inputed;
        // get the size of the matrix from the first line of input
        int row = inputed.length();
        int col = row; // square matrix

        // process the first line of input independently
        // because need this to determine the size of matrix
        // turn the element in string into char
        for (int i = 0; i < col; i++) {
            input[0][i] = inputed[i]-'0';
        }
        // process the other line of input
        // turn the element in string into char
        // process first line of input, so i starts from 1
        for (int i = 1; i < row; i++) {
            cin >> inputed;
            for (int j = 0; j < col; j++) {
                input[i][j] = inputed[j]-'0';
            }
        }
        // do step 1
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                // next row element value is 1, add 1 and change the value of that array
                if (input[i+1][j] == 1){
                    input[i+1][j] = input[i][j] + 1;
                }
            }
        }
        // do step 2
        int answer = 0; // results for output
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                int width = 1;
                for (int left = j-1; ; left--) {
                    if (left == -1){
                        break;
                    }
                    if (input[i][left] < input[i][j]){
                        break;
                    }
                    else{
                        width++;
                    }
                }
                for (int right = j+1; ; right++) {
                    if (right == col+1){
                        break;
                    }
                    if (input[i][right] < input[i][j]){
                        break;
                    }
                    else{
                        width++;
                    }
                }
                dp[i][j] = input[i][j]*width;
                answer = max(dp[i][j], answer);
            }
        }
        cout << answer << endl;
    }
    return 0;
}

/*
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                cout << input[i][j] << " ";
            }
            cout << endl;
        }
*/