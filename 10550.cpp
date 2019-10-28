#include <iostream>

using namespace std;
int main() {
    int starting, first, second, third;
    while(cin >> starting >> first >> second >> third){
        if ((starting==0 && first == 0 && second == 0 && third == 0)){
            break;
        }
        else{
            //先求指針變化量，最後 *9
            int sum = 720; // 順轉 2 圈
            // no need to % 40
            sum = sum + ((40+starting-first)%40) * 9; // 順轉到密碼 first
            sum = sum + 360; // 逆轉 1 圈
            sum = sum + ((40+second-first)%40) *9;    // 逆轉到密碼 second
            sum = sum + ((40+second-third)%40) *9;    // 順轉到密碼 third
            cout << sum << endl;
        }
    }
    return 0;
}