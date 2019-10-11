#include <iostream>

using namespace std;

int main() {
    int input;
    while(cin >> input){
        int dividend = 1;
        int ans = 1;
        while(dividend % input != 0){
            dividend = dividend % input * 10 + 1;
            ans++;
        }
        cout << ans << endl;
    }

    return 0;
}