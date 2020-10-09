#include <iostream>

using namespace std;

int trans(char c) {
    if (c == 'B' || c == 'F' || c == 'P' || c == 'V') {
        return 1;
    } else if (c == 'C' || c == 'G' || c == 'J' || c == 'K' || c == 'Q' || c == 'S' || c == 'X' || c == 'Z') {
        return 2;
    } else if (c == 'D' || c == 'T') {
        return 3;
    } else if (c == 'L') {
        return 4;
    } else if (c == 'M' || c == 'N') {
        return 5;
    } else if (c == 'R') {
        return 6;
    } else {
        return 0;
    }
}
int main() {
    string input;
    while(cin >> input) {
        for (int i = 0; i < input.length(); i++) {
            // if using input[i] == input[i-1] to detect repeated char
            // PFISTER --> 11236 (instead of 1236)
            if (i > 0 && trans(input[i]) == trans(input[i-1])) {
                continue;
            } else if (trans(input[i]) == 0){
                continue;
            } else {
                cout << trans(input[i]);
            }
        }
        cout << endl;
    }
    return 0;
}
