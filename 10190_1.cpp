#include <iostream>
#include <cmath>  //pow
#include <math.h> //pow

// Time Limit = =
using namespace std;

int main(){
    long long n, m;
    while(cin >> n >> m){
        int tmp = m;
        for (int i = 1; tmp < n; i++)
        {
            tmp = pow(m,i);
        }
        // Does not match
        if (tmp>n)
        {
            cout << "Boring!" << endl;
        }
        else{
            while(tmp > 0){
                cout << tmp;
                if (tmp != 1)
                {
                    cout << " ";
                }
                else{
                    cout << endl;
                }
                tmp /= m;
            }
        }
    }
    return 0;
}