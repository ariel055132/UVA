#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N, B, C, Q;
    long long no = 0;
    long long ans = 0;
    vector<long long> num(100005); // n < 10^5
    cin >> N;
    for (int i = 1; i <= N; i++) {
        cin >> no;
        ans += no;
        num[no]++;
    }
    cin >> Q;
    for (int j = 0; j < Q; j++) {
        cin >> B >> C;
        ans += (C - B) * num[B];
        num[C] += num[B];
        num[B] = 0;
        cout << ans << endl;
    }
    return 0;
}
