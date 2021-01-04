#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    int n;
    int x;
    int tmp_max = 0;
    ll ans = 0;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        tmp_max = max(tmp_max, x);
        ans += tmp_max-x;
    }
    cout << ans << endl;
    return 0;
}