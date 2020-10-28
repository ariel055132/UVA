#include <iostream>
#include <map>

using namespace std;
// base conversion

int main() {
    long long N; // input of the dog numbered N
    map<int, char> mp;
    map<int, char>::iterator iter;
    // initialize the map
    string alphabet = "abcdefghijklmnopqrstuvwxyz";
    for (int i = 1; i <= 26; i++) {
        mp[i] = alphabet[i-1]; // a = 1, b = 2, c = 3
    }
    /*
    for (iter = mp.begin(); iter != mp.end() ; iter++) {
        cout << iter -> first << " " << iter -> second;
        cout << endl;
    }
    */
    string ans = "";
    char conv;
    while(cin >> N) {
        while (N > 0) {
            if (N % 26 == 0) {
                conv = mp[26];
                ans = conv + ans;
                N -= 26;
            } else {
                int remainder = N % 26;
                conv = mp[remainder];
                ans = conv + ans;
            }
            N /= 26;
        }
        cout << ans << endl;
        ans.clear();
    }
    return 0;
}
