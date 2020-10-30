#include <iostream>
#include <math.h>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    int n;
    cout << "PERFECTION OUTPUT" << endl;
    while(cin >> n) {
        if (n == 0) {
            break;
        }
        if (n == 1) {
            cout << setw(5) << n <<  "  DEFICIENT" << endl;
            continue;
        }
        int sum = 1;
        int sq = sqrt(n);
        for (int i = 2; i <= sq; i++) {
            if (n % i == 0) {
                sum += i;
                sum += n / i;
            }
        }
        if (sum == n) {
            cout << setw(5) << n << "  PERFECT" << endl;
        } else if (sum > n) {
            cout << setw(5) << n <<   "  ABUNDANT" << endl;
        } else if (sum < n) {
            cout << setw(5) << n << "  DEFICIENT" << endl;
        }
    }
    cout << "END OF OUTPUT" << endl;
    return 0;
}
