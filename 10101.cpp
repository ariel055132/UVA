#include <iostream>
using namespace std;

void numfunction(long long n){
    if (n>=10000000)
    {
        numfunction(n/10000000);
        cout << " kuti";
        n = n % 10000000;
    }
    if (n>=100000)
    {
        numfunction(n/100000);
        cout << " lakh";
        n = n % 100000;
    }
    if (n>=1000)
    {
        numfunction(n/1000);
        cout << " hajar";
        n = n % 1000;
    }
    if (n>=100){
        numfunction(n/100);
        cout << " shata";
        n = n % 100;
    }
    if (n>0){
        cout << " " << n; 
    }
}
int main(){
    long long n;
    int cases = 1;
    while (cin >> n)
    {
        cout << cases << ".";
        if (n==0)
        {
            cout << " 0";
        }
        else{
            numfunction(n);
        }
        cout << endl;
        cases++;
    }
    
    return 0;
}