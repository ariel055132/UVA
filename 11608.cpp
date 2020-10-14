#include <iostream>

using namespace std;

int main() {
    int s;
    int case_no = 1;
    while(cin >> s) {
        if (s < 0) {
            break;
        }
        int add[12] = {0}; // 每個月所出的題目數量
        int use[12] = {0}; // 每個月比賽所需要的題目數量
        for (int i = 0; i < 12; i++) {
            cin >> add[i];
        }
        for (int i = 0; i < 12; i++) {
            cin >> use[i];
        }
        cout << "Case " << case_no << ":" << endl;
        case_no++;
        for (int i = 0; i < 12; i++) {
            if (use[i] <= s) {
                cout << "No problem! :D" << endl;
                s = s - use[i];
            } else {
                cout << "No problem. :(" << endl;
            }
            s = s + add[i];
        }
    }
    return 0;
}
