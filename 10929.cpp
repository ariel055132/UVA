#include <iostream>

using namespace std;

int main() {
    string input;
    while(cin >> input && input != "0"){
        int odd = 0;
        int even = 0;
        for (int i = 0; i < input.length(); i++) {
            // remember to -'0' in order to convert the string into int
            if(i%2==0){
                odd = odd + (input[i]-'0');
            }
            else if (i%2!=0){
                even = even + (input[i]-'0');
            }
        }
        if ((odd-even) % 11 == 0){
            cout << input << " is a multiple of 11." << endl;
        }
        else{
            cout << input << " is not a multiple of 11." << endl;
        }
    }
    return 0;
}