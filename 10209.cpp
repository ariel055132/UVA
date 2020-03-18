#include <iostream>
#include <iomanip>  // cout.precision
#include <math.h>   // sqrt
#define pi 2.0*acos(0.0)
using namespace std;

int main(){
    double s;
    while (cin >> s)
    {
        //double pi = 2.0*acos(0.0);
        double a = s*s - (pi*s*s/6) - (s*s*sqrt(3.0)/4);
        double b = s*s - (2*a) - (pi*s*s/4);
        double c = s*s - 4*b - 4*a;
        cout.precision(3);
        cout << fixed << c << " " << 4*b << " " << 4*a << endl;
    }
    return 0;
}