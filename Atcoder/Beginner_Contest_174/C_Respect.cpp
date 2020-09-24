#include <iostream>
using namespace std;
// Reference: https://my.oschina.net/u/4321684/blog/4468019
int main() {
    int k;
    int cnt = 1;
    int a = 7;
    cin >> k;
    // Even number and units digits == 5 cannot find the corresponding 777...7
    // Some Examples in the bottom of the code
    if (k % 2 == 0 || k % 10 == 5) {
        cout << -1 << endl;
        return 0;
    }
    while(true){
        if (a % k == 0){
            break;
        } else {
            a = a % k;
            a = a * 10 + 7;
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}

/*
 *  Even number example
 *  K = 2
 *  1. 7 % 2 = 1
 *  2. 1 * 10 + 7 = 17, 17 % 2 = 1
 *  Loops with step 2.
 *
 *  K = 4
 *  1. 7 % 4 = 3
 *  2. 3 * 10 + 7 = 37, 37 % 4 = 1
 *  3. 1 * 10 + 7 = 17, 17 % 4 = 1
 *  Loops with step 3.
 *
 *
 *  K = 6
 *  1. 7 % 6 = 1
 *  2. 1 * 10 + 7 = 17, 17 % 6 = 5
 *  3. 5 * 10 + 7 = 57, 57 % 6 = 3
 *  4. 3 * 10 + 7 = 37, 37 % 6 = 1
 *  5. 1 * 10 + 7 = 17, 17 % 6 = 5
 *  Loops with step 2 to 4.
 *
 *  K = 8
 *  1. 7 % 8 = 7
 *  2. 7 * 10 + 7 = 77, 77 % 6 = 5
 *  3. 5 * 10 + 7 = 57, 57 % 8 = 1
 *  4. 1 * 10 + 7 = 17, 17 % 8 = 1
 *  Loops with step 4.
 *
 *  K = 5
 *  1. 7 % 5 = 2
 *  2. 2 * 10 + 7 = 27, 27 % 5 = 2
 *  Loops with step 5.
 */
