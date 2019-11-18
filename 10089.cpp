#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;
// Linear programming = =
int main() {
    int testcase;
    int input1, input2, input3;
    double result[1005];
    const double pi = acos(-1); // acos(-1) = 3.149265...
    while(cin >> testcase){
        if(testcase == 0){
            break;
        }
        for (int i = 0; i < testcase; i++) {
            cin >> input1 >> input2 >> input3;
            result[i] = atan2(input2-input1, input3-input1);
        }
        sort(result, result+testcase);
        double tmp = 0;
        for (int i = 1; i < testcase; i++) {
            tmp = max(tmp, result[i]-result[i-1]);
        }
        tmp = max(tmp, result[0]-result[testcase-1]+2*pi);
        if(tmp<=pi){
            cout << "Yes" << endl;
        }
        else{
            cout << "No" << endl;
        }
    }
    return 0;
}