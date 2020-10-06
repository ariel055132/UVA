#include <iostream>

using namespace std;

int main() {
    int testcase;
    string input;
    cin >> testcase;
    for (int j = 0; j < testcase; j++) {
        cin >> input;
        int score = 0;
        int cnt = 0; // count the consecutive appear times of O
        for (int i = 0; i < input.length(); i++) {
            if (input[i] == 'O') {
                cnt++;
                score += cnt;
            } else {
                cnt = 0;
            }
        }
        cout << score << endl;
    }
    return 0;
}
