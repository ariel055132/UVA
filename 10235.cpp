#include <iostream>
#include <string>
using namespace std;

bool isPrime(int no){
    bool flag = true;
    for (int i = 2; i <= no/2; i++) {
        if (no%i==0){
            flag = false;
            break;
        }
    }
    return flag;
}

int main() {
    string input;
    string input2 = "";
    while(cin >> input){
        // reverse the number
        for (int i = input.length()-1; i >= 0 ; i--) {
            input2 += input[i];
        }
        int no1 = stoi(input);
        int no2 = stoi(input2);
        // An emirp is a prime that gives you a different Prime when its digits are reversed.
        if ((isPrime(no1) && isPrime(no2))&& (no1 != no2)){
            cout << no1 << " is emirp." << endl;
        }
        else if (!isPrime(no1)){
            cout << no1 << " is not prime." << endl;
        }
        else{
            cout << no1 << " is prime." << endl;
        }
        input2 = "";
    }
    return 0;
}