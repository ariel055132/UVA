#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main() {
    int testcase;
    int input;
    string num;
    int alpha[10];
    cin >> testcase;
    for (int i = 0; i < testcase; i++) {
        // init alpha array
        for (int l = 0; l < 10; l++) {
            alpha[l] = 0;
        }
        cin >> input;
        for (int j = 1; j <= input ; j++) {
            string j_tmp = to_string(j);
            num += j_tmp;
        }
        for (int k = 0; k < num.length(); k++) {
            alpha[num[k]-'0']++;
        }
        for (int m = 0; m < 9; m++) {
            cout << alpha[m] << " ";
        }
        cout << alpha[9] << endl;
        num = "";
    }
    return 0;
}
