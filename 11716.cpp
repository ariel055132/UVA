#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int t; // number of testcase
    string cipher;
    cin >> t;
    cin.ignore(); // without this, it will jump to 3 line after enter no of testcase
    for (int i = 0; i < t; i++) {
        getline(cin , cipher);
        int cip_len = (int)sqrt(cipher.length());
        if (cip_len * cip_len != cipher.length()) {
            cout << "INVALID" << endl;
        } else {
            char cip[100][100]; // total number of characters in the text will not be more 10000
            int z = 0;
            // put the cipher text into a 2d char array
            for (int j = 0; j < cip_len; j++) {
                for (int k = 0; k < cip_len; k++) {
                    cip[j][k] = cipher[z];
                    z++;
                }
            }
            // output the result from column
            for (int j = 0; j < cip_len; j++) {
                for (int k = 0; k < cip_len; k++) {
                    cout << cip[k][j];
                }
            }
            cout << endl;
        }
    }
    return 0;
}
