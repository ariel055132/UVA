#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, q; // number of marbles / queries
    int case_no = 1;
    while (cin >> n >> q) {
        if (n == 0 && q == 0) {
            break;
        }
        vector<int> marbles;
        int tmp;
        int query;
        int found_index = -1;
        for (int i = 0; i < n; i++) {
            cin >> tmp;
            marbles.push_back(tmp);
        }
        sort(marbles.begin(), marbles.end());
        cout << "CASE# " << case_no << ":" << endl;
        case_no++;
        for (int j = 0; j < q; ++j) {
            cin >> query;
            for (int i = 0; i < n; i++) {
                if (marbles[i] == query) {
                    found_index = i;
                    break;
                }
            }
            if (marbles[found_index] == query) {
                cout << query << " found at " << found_index + 1 << endl;
            } else {
                cout << query << " not found" << endl;
            }
        }
    }
    return 0;
}
