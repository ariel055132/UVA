#include <iostream>
using namespace std;
// Use Euclidean Algorithm to find GCD (greatest common divisor) by recursive
int GCD(int a, int b){
    if (a == 0 && b!= 0){
        return a;
    }
    if (b == 0){
        return a;
    }
    else{
        return GCD(b, a%b);
    }
}

int main() {
    int n = 0;
    while(cin >> n){
        if (n == 0){
            break;
        }
        int g = 0;
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j <= n ; j++) {
                g += GCD(i,j);
            }
        }
        cout << g << endl;
    }
    return 0;
}
