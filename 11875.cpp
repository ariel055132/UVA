#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t; // number of test case
    int n; // ages of all the members of a team
    int tmp; // age of an individual member
    cin >> t;
    for (int case_num = 1; case_num <= t ; case_num++) {
        cin >> n;
        vector<int> age;
        for (int i = 0; i < n; i++) {
            cin >> tmp;
            age.push_back(tmp);
        }
        sort(age.begin(), age.end());
        cout << "Case " << case_num << ": " << age[n/2] << endl;
    }
    return 0;
}
