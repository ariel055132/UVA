#include <iostream>
using namespace std;

int main() {
    int n, k;
    while(cin >> n >> k){
        int count = n;
        while(n >= k){
            count = count + n/k;
            n = n/k + n%k;
        }
        cout << count << endl;
    }
    return 0;
}
