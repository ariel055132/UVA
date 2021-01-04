#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    int ans = 1;
    cin >> s;

    for (int i = 0; i < s.length()-1;)
    {
        int tmp = 1;
        while (s[i] == s[i+1])
        {
            tmp++;
            i++;
        }
        ans = max(ans, tmp);
        i++;
    }
    
    cout << ans << endl;
    return 0;
}