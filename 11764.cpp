#include <iostream>

using namespace std;

int main() {
    int t; // number of test case
    int n; // number of walls
    int h; // height of wall
    int high; // high jump no
    int low; // low jump no

    cin >> t;
    for (int case_no = 1; case_no <= t; case_no++) {
        cin >> n;
        int cur_pos = -1;
        high = 0;
        low = 0;
        for (int i = 0; i < n; i++) {
            cin >> h;
            if (h > cur_pos) {
                high++;
            } else if (h < cur_pos) {
                low++;
            }
            cur_pos = h;
        }
        cout << "Case " << case_no << ": " << high - 1 << " " << low << endl;
    }
    return 0;
}
