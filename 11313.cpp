#include <iostream>

using namespace std;

int main() {
    int t; // no of case
    int n, m; // no of candidates / number of chefs participating
    int cnt; // cnt the answers
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> n >> m;
        cnt = 0;
        while(n > 1) {
            n = n - m + 1;
            cnt++;
        }
        if (n == 1) {
            cout << cnt << endl;
        } else {
            cout << "cannot do this" << endl;
        }
    }
    return 0;
}
