#include <iostream>

using namespace std;

int main() {
    string input;
    while(cin >> input){
        string ans = "";
        for (int i = 0; i < input.length(); i++) {
            ans += input[i] - 7;
        }
        cout << ans << endl;
        //cout << (int)'1' << endl;
        //cout << (int)'*' << endl;
    }
    return 0;
}
