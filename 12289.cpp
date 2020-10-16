#include <iostream>

using namespace std;

int main() {
    int testcase; 
    string input;
    int onetwo;

    cin >> testcase;
    for(int i = 0; i < testcase; i++) {
        cin >> input;
        if (input.length() == 5) {
            cout << 3 << endl;
        } else {
            onetwo = 0;
            if (input[0] == 'o') onetwo++;
            if (input[1] == 'n') onetwo++;
            if (input[2] == 'e') onetwo++;
            if (onetwo >= 2) {
                cout << 1 << endl;
            } else {
                cout << 2 << endl;
            }
        }
    }
}