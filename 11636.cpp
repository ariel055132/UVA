#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    int t = 1; // show the case no
    while(cin >> n) {
        if (n < 0) {
            break;
        }
        int tmp;
        for (int i = 1; ; i++) {
            tmp = pow(2, i);
            if (tmp >= n) {
                tmp = i;
                break;
            }
        }

        if (n == 1) {
            tmp = 0;
        }
        cout << "Case " << t  << ": " << tmp << endl;
        t++;
    }
    return 0;
}
