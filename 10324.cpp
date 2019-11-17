#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

const int max_len = 1000005;
string input; // A string of 0's and 1's
int cases;    // The number of queries for this case
int start, finish; // start position / finish position

// 將每個連續的部分當作一個group，最後看頭尾兩側是否在同一個group即可得解。
int main() {
    int count = 1;
    while(cin >> input){
        cin >> cases;
        cout << "Case " << count << ":" << endl;
        count++;
        for (int i = 0; i < cases; i++) {
            cin >> start >> finish;
            if (finish < start){
                int temp = finish;
                finish = start;
                start = temp;
            }
            bool flag = true;
            for (int j = start; j < finish; j++) {
                if (input[j] != input[j+1]){
                    flag = false;
                    break;
                }
            }
            if(flag == true){
                cout << "Yes" << endl;
            }
            else{
                cout << "No" << endl;
            }
        }
    }
    return 0;
}