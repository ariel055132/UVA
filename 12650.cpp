#include <iostream>

using namespace std;

int main() {
    int n, r;
    int no;
    while(cin >> n >> r) {
        // declare and initialize the array
        int num[n];
        for (int i = 1; i <= n; i++) {
            num[i] = 0;
        }
        for (int i = 0; i < r; i++) {
            cin >> no;
            num[no] = 1;
        }

        // no one died after repair
        if (n == r) {
            cout << "*";
        } else {
            for (int i = 1; i <= n ; i++) {
                // find ppl died
                if (num[i] == 0) {
                    cout << i << " ";
                }
            }
        }
        cout << endl;
    }
    return 0;
}
