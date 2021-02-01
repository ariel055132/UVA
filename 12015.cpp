#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    for (int cases = 1; cases <= t; cases++) {
        string webpages[10];
        int num[10];
        int max = 0;
        for (int i = 0; i < 10; i++) {
            cin >> webpages[i] >> num[i];
            if (max < num[i])
            {
                max = num[i];
            }
        }
        cout << "Case #" << cases << ":" << endl;
        for(int i = 0; i < 10; i++) {
            if (num[i] == max) {
                cout << webpages[i] << endl;
            }
        }
    }
    return 0;
} 