#include <iostream>

using namespace std;

// 套公式
// 平均速度 * 經過的時間 , 再乘上2倍時間
int main(){
    int v; // velocity
    int t; // at the time the particle gains that velocity 
    while(cin >> v >> t){
        cout << 2 * v * t << endl;
    } 
    return 0;
}