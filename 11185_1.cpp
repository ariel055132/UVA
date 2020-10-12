#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
int main() {
    int n;
    while(cin >> n) {
        if (n < 0) {
            break;
        } else if (n == 0) {
            cout << "0" << endl;
        } else {
            string ans = "";
            int no = 0;
            while (n != 0) {
                no = n % 3;
                ans = to_string(no) + ans;
                n /= 3;
            }
            cout << ans << endl;
        }
    }
    return 0;
}
