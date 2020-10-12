#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    long long n;
    while(cin >> n) {
        if (n < 0) {
            break;
        } else if (n == 0) {
            // dont forget n == 0 (= =)
            cout << 0 << endl;
        } else {
            long long no = 0;
            vector<int> num;
            num.clear();
            while(n != 0) {
                no = n % 3;
                num.push_back(no);
                n /= 3;
            }
            reverse(num.begin(), num.end());
            for (int i = 0; i < num.size() ; i++) {
                cout << num[i];
            }
            cout << endl;
        }
    }
    return 0;
}
