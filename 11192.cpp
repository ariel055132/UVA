#include <iostream>
#include <string>
#include <algorithm>

/* implementation of substr() 呼叫子字串
 * string a="123456789";
   cout<<a.substr(2,5)<<endl;  //表示呼叫「字串a索引2數起的5個字元」所構成的子字串，顯示34567
   cout<<a.substr(2)<<endl;  //表示呼叫「字串a索引2數起之後的所有字元」所構成的子字串，顯示3456789
 *
 */
using namespace std;

int main() {
    int g;
    string input;
    string ans;
    while(cin >> g) {
        if (g == 0) {
            break;
        }
        cin >> input;
        ans.clear();
        int input_len = input.length();
        int part_len = input_len / g;
        for (int i = 0; i < input_len; i += part_len) {
            string tmp = input.substr(i, part_len);
            reverse(tmp.begin(), tmp.end());
            ans += tmp;
        }
        cout << ans << endl;
    }
    return 0;
}
