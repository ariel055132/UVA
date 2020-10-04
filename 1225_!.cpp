#include <iostream>
using namespace std;

int main() {
    int testcase;
    int num[10]; // store the num of digits
    int input;
    cin >> testcase;
    for (int i = 0; i < testcase; i++) {
        // init num array
        for (int j = 0; j < 10; j++) {
            num[j] = 0;
        }
        cin >> input;
        for (int k = 1; k <= input; k++) {
            int tmp = k;
            while(tmp > 0){
                num[tmp%10]++;
                tmp = tmp / 10;
            }
        }

        for (int l = 0; l < 9; l++) {
            cout << num[l] << " ";
        }
        cout << num[9] << endl;
    }
    return 0;
}
