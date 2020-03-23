#include <iostream>
#include <string>
#include <math.h> // pow
using namespace std;

// bin to dec
// find the gcd
// gcd == 1 --> All you need is love!
// else -- > Love is not all you need!
int bin2dec(string s);
int gcd(int a, int b);

int main(){
    int testcase; // number of testcase;
    string s1;
    string s2;
    cin >> testcase;
    for (int i = 1; i <= testcase; i++)
    {
        cin >> s1 >> s2;
        int num1 = bin2dec(s1);
        int num2 = bin2dec(s2);
        int gcd_result = gcd(num1, num2);
        cout << "Pair #" << i << ": ";
        if (gcd_result != 1)
        {
            cout << "All you need is love!" << endl;
        }
        else{
            cout << "Love is not all you need!" << endl;
        }
        
    }
    
    return 0;
}

int bin2dec(string s){
    int num = 0;
    for (int i = 0; i < s.length(); i++)
    {
        int digit = s[i]-'0';
        int tmp = digit*pow(2,s.length()-1-i);
        num += tmp;
    }
    return num;
}

int gcd(int a, int b){
    if (a == 0 && b != 0)
    {
        return a;
    }
    if (b == 0)
    {
        return a;
    }
    else{
        return gcd(b, a%b);
    }
    
}