#include <iostream>

using namespace std;

int f(int n){
    int sum = 0;
    while (n!=0)
    {
        sum += n%10;
        n /= 10;
    }  
    return sum;
}

int main(){
    int n;
    while (cin >> n)
    {
        if (n == 0)
        {
            break;
        }
        else
        {
            while (f(n) >= 10)
            {
                n = f(n);
            }
            cout << f(n) << endl;
        }
    }
    return 0;
}