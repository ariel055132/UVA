#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, m; // numbers in the set of integer, number of queries
    int no;
    int query;
    int case_num = 1;
    vector<int> num;
    while(cin >> n) {
        if (n == 0) {
            break;
        }
        num.clear();
        for (int i = 0; i < n; i++) {
            cin >> no;
            num.push_back(no);
        }
        sort(num.begin(), num.end());
        cout << "Case " << case_num << ":" << endl;
        case_num++;

        cin >> m;
        for (int l = 0; l < m; l++) {
            cin >> query;
            int ans = num[0] + num[1];
            int tmp = abs(ans - query);
            for (int i = 0; i < n; ++i) {
                for (int j = i+1; j < n; ++j) {
                    if (abs(num[i]+num[j]-query) < tmp) {
                        ans = num[i] + num[j];
                        tmp = abs(ans - query);
                    } else if (num[i] + num[j] - query > tmp) {
                        break;
                    }
                }
            }
            cout << "Closest sum to " << query << " is " << ans << "." << endl;
        }
    }
    return 0;
}
