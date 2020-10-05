#include <iostream>

using namespace std;

int main() {
    int num[5];
    int ans = 0;
    for (int i = 0; i < 5; i++) {
        cin >> num[i];
        if (num[i] == 0) {
            ans = i + 1;
        }
    }
    cout << ans << endl;
    return 0;
}
