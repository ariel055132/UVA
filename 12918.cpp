#include <iostream>
using namespace std;
// https://theriseofdavid.github.io/2020/06/09/UVa/UVa12918/
int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        long long a, b, ans;
        cin >> a >> b;
        ans = (b + b - a - 1) * a / 2;
        cout << ans << endl;
    }
    return 0;
}
