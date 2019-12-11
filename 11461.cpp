#include <iostream>
#include <math.h>
using namespace std;
int main() {
    int a;
    int b;
    while(cin >> a >> b){
        if (a == 0 && b == 0){
            break;
        }
        int count = 0; // count the no of sqrt no between a and b
        int i = sqrt(a);
        while(pow(i,2)<=b){
            if (pow(i,2)>=a){
                count++;
            }
            i++;
        }
        cout << count << endl;
    }
    return 0;
}