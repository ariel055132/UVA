#include <iostream>

using namespace std;

int main() {
    int d;
    string input;
    while(cin >> d >> input) {
        if (d == 0 && input == "0") {
            break;
        }
        string ans = "";
        for (int i = 0; i < input.length(); i++) {
            if (input[i]-'0' == d){

            } else {
                // in the same machine, when digit 5 is missing, the number 5000 corresponds to the numeric value 0, not 000
                if (input[i] == '0' && ans == "") {

                } else {
                    ans += input[i];
                }
            }
        }
        if (ans == "") {
            cout << 0 << endl;
        } else {
            cout << ans << endl;
        }

    }
    return 0;
}
