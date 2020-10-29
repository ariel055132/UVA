#include <iostream>

using namespace std;
/*
 * 4
 * 20 11 9 24
 *
 * 26 5 7 22
 * 5^7^22 = 20
 * 26^7^22 = 11
 * 26^5^22 = 9
 * 26^5^7 = 24
 *
 *   20^11^9^24
 * = (5^7^22)^(26^7^22)^(26^5^22)^(26^5^7)
 * = (5^5)^5^(26^26)^26^(7^7)^7^(22^22)^22
 * = 5^26^7^22
 * sum^5 / sum^26 / sum^7 / sum^22 --> OK
 */
int main() {
    int n;
    int num[200005] = {0};
    int sum = 0;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> num[i];
        sum = sum^num[i];
    }
    for (int i = 1; i <= n; i++) {
        cout << (sum^num[i]) << " ";
    }
    return 0;
}
