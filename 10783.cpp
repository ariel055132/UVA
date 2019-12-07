#include <iostream>

using namespace std;
int main() {
    int n; // number of testcase
    int a, b; // [a,b]
    int sum = 0;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        sum = 0;
        cin >> a >> b;
        for (int j = a; j <= b; j++) {
            // odd number
            if(j%2==1){
                sum = sum + j;
            }
            // even number
            else{

            }
        }
        cout << "Case " << i << ": " << sum << endl;
    }

    return 0;
}