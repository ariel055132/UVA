#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    int no;
    vector<int> num;
    int ans = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> no;
        num.push_back(no);
    }
    sort(num.begin(), num.end());
    for (int i = 1; i <= num.size(); i++)
    {
        if (num[i] != num[i-1])
        {
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}
