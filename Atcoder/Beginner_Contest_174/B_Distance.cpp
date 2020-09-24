#include <iostream>
#include <math.h>
using namespace std;
int main() {
    long long n, d;
    long long x, y;
    int cnt = 0;
    cin >> n >> d;
    for (int i = 0; i < n; i++) {
        cin >> x >> y;
        long long dist = x*x + y*y;
        long double ans = sqrt(dist);
        if (ans <= d){
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}
