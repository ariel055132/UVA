#include <iostream>

using namespace std;
typedef struct{
    int x; // x-coordinates
    int y; // y-coordinates
}points;
points P[100];

int main() {
    int n;
    while(cin >> n){
        if (!n){
            break;
        }
        for (int i = 0; i < 2*n; i++) {
            cin >> P[i].x >> P[i].y;
        }
        // the line as form two int a, b (ax+by=0) and each no must not in [-500,500]
        for (int a = -500; a <= 500 ; a++) {
            for (int b = -500; b <= 500 ; b++) {
                int left = 0;  // ax+by < 0
                int right = 0; // ax+by > 0
                for (int i = 0; i < 2*n; i++) {
                    left = left + (P[i].x*a + P[i].y*b > 0);
                    right = right + (P[i].x*a + P[i].y*b < 0);
                }
                // find the solution
                if(left == n && right == n){
                    cout << a << " " << b << endl;
                    // find one solution is OK, therefore jump out the loop by setting a = 501, b=501
                    a = 501;
                    b = 501;
                }
            }
        }
    }
    return 0;
}