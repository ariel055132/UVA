#include <iostream>
// This program is time limit.
using namespace std;
int main() {
    int sqrt_no[350] = {};
    int a; // where to start
    int b; // where to finish
    // build the square no list
    for (int i = 0; i < 350; i++) {
        sqrt_no[i] = i*i;
    }
    while(cin >> a >> b){
        if (a == 0 && b == 0){
            break;
        }
        int count = 0;
        for (a; a <= b ; a++) {
            for (int k = 0;k < 350 ; k++){
                if (a == sqrt_no[k]){
                    count++;
                }
            }
        }
        cout << count << endl;
    }
    return 0;
}