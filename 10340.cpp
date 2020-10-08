#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string str1, str2;
    while(cin >> str1 >> str2) {
        int s1 = 0;
        int s2 = 0;
        while(s1 < str1.length() && s2 < str2.length()) {
            if (str1[s1] == str2[s2]) {
                s1++;
                s2++;
            } else {
                s2++;
            }
        }
        if (s1 == str1.length()) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    return 0;
}
