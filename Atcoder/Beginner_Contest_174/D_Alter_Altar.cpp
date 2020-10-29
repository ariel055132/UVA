#include <iostream>
using namespace std;

int main() {
    int N;
    string input;
    int cnt = 0;
    int r = 0;
    cin >> N >> input;

    for (int i = 0; i < input.length(); i++) {
        if (input[i] == 'R') {
            r++;
        }
    }
    for (int i = 0; i < r; i++) {
        if (input[i] == 'W') {
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}
