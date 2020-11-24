#include <iostream>
using namespace std;

int main() {
    string str;
    int ans;
    cin >> str;
    if (str[0] == 'S' && str[1] == 'S' && str[2] == 'S')
    {
        ans = 0;
    } else if (str[0] == 'R' && str[1] == 'R' && str[2] == 'R') {
        ans = 3;
    } else if ((str[0] == 'R' && str[1] == 'R') || (str[1] == 'R' && str[2] == 'R')) {
        ans = 2;
    } else if (str[0] == 'R' || str[1] == 'R' || str[2] == 'R') {
        ans = 1;
    }
    cout << ans << endl;
    
    return 0;
}