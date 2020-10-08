#include <iostream>

using namespace std;
// formula : n * (n + 1) / 2
// 1+2+3+4+5+...
int main() {
    long long n = 0;
    while(cin >> n) {
        if (n < 0){
            break;
        } else {
            n = (n*(n+1)) / 2 + 1;
            cout << n << endl;
        }
    }
    return 0;
}
