#include <iostream>

using namespace std;

int dec2bin(int n); // decimal (10) to binary (2)
int hex2bin(int n); // hexadecimal (16) to binary (2)

int main(){
    int testcase;
    int n;
    cin >> testcase;
    for (int i = 0; i < testcase; i++)
    {
        cin >> n;
        //int b1 = base2(n);
        cout << dec2bin(n) << " " << hex2bin(n) << endl;
    }
    
}

// decimal to binary
int dec2bin(int n){
    int count = 0;
    while(true){
        if (n >= 2)
        {
            if (n % 2 == 1)
            {
                count++;   
            }
            n = n / 2;
        }
        if (n == 1)
        {
            count++;
            break;
        }    
    }
    return count;
}

// hexadecimal to binary
// hexadecimal to decimal , decimal to binary
int hex2bin(int n){
    int count = 0;
    while(n > 0){
        int temp = n % 10;
        n = n / 10;
        while(temp > 0){
            if (temp %2 == 1)
            {
                count++;
            }
            temp /= 2;
        }
    }
    return count;
}