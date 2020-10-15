#include <iostream>

using namespace std;
/*
 * sq = 1, ans is 1 (1^2)
 * sq = 2, ans is 5 (1^2+2^2)
 * sq = 3, ans is 14 (1^2+2^2+3^2)
 * and so on.
 */

int main() {
    int sq; // number of square
    int ans;
    while(cin >> sq) {
        if (sq == 0) {
            break;
        } else {
            if (sq == 1) {
                cout << 1 << endl;
            } else {
                ans = 1;
                for (int i = 2; i <= sq; i++) {
                    ans += i*i;
                }
                cout << ans << endl;
            }
        }
    }
    return 0;
}
