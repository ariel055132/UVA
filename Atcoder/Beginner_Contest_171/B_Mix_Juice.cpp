#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int N, K;
    int price[1005];
    int ans = 0;
    cin >> N >> K;
    for (int i = 0; i < N; i++) {
        cin >> price[i];
    }
    sort(price, price+N);
    for (int j = 0; j < K; j++) {
        ans += price[j];
    }
    cout << ans << endl;
    return 0;
}
