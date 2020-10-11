#include <iostream>

using namespace std;
int main() {
    int testcase, n, m;
    cin >> testcase;
    for (int i = 0; i < testcase; i++) {
        cin >> n >> m;
        cout << (n/3) * (m/3) << endl;
    }
    return 0;
}
