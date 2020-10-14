#include <iostream>

using namespace std;

int main() {
    int t; // number of testcase
    int n; // number of stores want to visit
    int d; // positions of the stores
    int max;
    int min;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> n;
        max = 0; min = 100;
        for (int j = 0; j < n; j++) {
            cin >> d;
            if (d > max) {
                max = d;
            }
            if (min > d) {
                min = d;
            }
        }
        cout << (max-min)*2 << endl;
    }
    return 0;
}
