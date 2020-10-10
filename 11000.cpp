#include <iostream>

using namespace std;
// 母蜂的數量=上一代公蜂數量+1
// 公蜂數量=上一代的總蜜蜂數量。
int main() {
    long long n;
    while(cin >> n) {
        if (n == -1) {
            break;
        }
        long long f = 1; // female bee
        long long m = 0; // male bee
        long long tmp_f = 0;
        long long tmp_m = 0;
        for (int i = 0; i < n; i++) {
            tmp_f = m + 1;
            tmp_m = f + m;
            f = tmp_f;
            m = tmp_m;
        }
        cout << m << " " << m+f << endl;
    }
    return 0;
}
