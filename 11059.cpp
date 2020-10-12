#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n; // the number of elements in a sequence
    int no;
    long long tmp; // use long long to prevent overflow, int tmp will get wrong answer
    long long ans; // same as tmp
    int case_no = 1;
    vector<int> num; // sequence

    while(cin >> n) {
        num.clear();
        for (int i = 0; i < n; i++) {
            cin >> no;
            num.push_back(no);
        }
        ans = 0;
        for (int j = 0; j < n; j++) {
            tmp = 1;
            for (int k = j; k < n; k++) {
                tmp *= num[k];
                ans = max(tmp, ans);
            }
        }
        cout << "Case #" << case_no << ": The maximum product is " << ans << "." << endl << endl;
        case_no++;
    }

    return 0;
}
