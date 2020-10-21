#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
    int n;
    string plates;
    string str1; // front part of the plates
    int num1;
    string str2; // latter part of the plates
    int num2;

    cin >> n;
    cin.ignore(); // ws can also be used
    for (int times = 0; times < n; times++) {
        num1 = 0; num2 = 0;
        getline(cin, plates);
        for (int i = 0; i < plates.length(); i++) {
            if (i < 3) {
                str1 += plates[i];
            } else if (i >= 4) {
                str2 += plates[i];
            }
        }
        //cout << str1 << endl;
        //cout << str2 << endl;
        for (int i = 0; i < str1.length(); i++) {
            num1 += (str1[i]-'A') * (int)pow(26, 2-i);
        }
        //cout <<  "num1 " <<  num1 << endl;
        if (str2[0] == '0') {
            string tmp = "";
            tmp = tmp + str2[1] + str2[2] + str2[3];
            num2 = stoi(tmp);
        } else {
            num2 = stoi(str2);
        }
        //cout <<  "num2 " <<  num2 << endl;
        if (abs(num1-num2) <= 100) {
            cout << "nice" << endl;
        } else {
            cout << "not nice" << endl;
        }
        str1.clear();
        str2.clear();
    }
    return 0;
}
