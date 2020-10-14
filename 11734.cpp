#include <iostream>

using namespace std;

int main() {
    int t; // num of testcase
    string user; // user input
    string judge; // judge input
    bool same;
    bool space;
    cin >> t;
    cin.ignore(); // add this to avoid input error
    for (int i = 1; i <= t; i++) {
        getline(cin , user);
        getline(cin , judge);

        string user_tmp = "";
        for (int j = 0; j < user.length(); j++) {
            if (user[j] != ' ') {
                user_tmp += user[j];
            }
        }

        if (user_tmp == judge) {
            same = true;
            space = false;
        } else {
            same = false;
        }
        if (user == judge) {
            same = true;
            space = true;
        }

        cout << "Case " << i << ": ";
        if (same == true && space == true) {
            cout << "Yes" << endl;
        } else if (same == true && space == false) {
            cout << "Output Format Error" << endl;
        } else {
            cout << "Wrong Answer" << endl;
        }
    }
    return 0;
}
