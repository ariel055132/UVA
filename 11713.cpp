#include <iostream>

using namespace std;

int main() {
    int n;
    string s1, s2;
    bool same;
    cin >> n;
    for (int i = 0; i < n; i++) {
        /*
        getline(cin, s1);
        cin.ignore();
        getline(cin ,s2);
         */
        cin >> s1 >> s2;
        if (s1.length() != s2.length()) {
            same = false;
        } else {
            same = true;
            for (int j = 0; j < s1.length(); j++) {
                if (s1[j] == 'a' || s1[j] == 'e' || s1[j] == 'i' || s1[j] == 'o' || s1[j] == 'u') {
                    if (s2[j] == 'a' || s2[j] == 'e' || s2[j] == 'i' || s2[j] == 'o' || s2[j] == 'u') {
                        continue;
                    } else {
                        same = false;
                        break;
                    }
                } else if (s1[j] != s2[j]) {
                    same = false;
                    break;
                }
            }
        }

        if (same == true) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }

    }
    return 0;
}
