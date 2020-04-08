#include <iostream>
using namespace std;

int main() {
    int n = 0;
    while(cin >> n){
        if (n == 0){
            break;
        }else{
            cout << n << " : ";
            int factor = 0;
            int n_tmp = n;
            // prime factor factorization and sieve
            for (int i = 2; i <= n_tmp/2; i++) {
                if (n%i==0){
                    factor++;
                    while(n%i==0){
                        n /= i;
                    }
                }
            }
            if(n!=1){
                factor++;
            }
            cout << factor << endl;
        }
    }
    return 0;
}
