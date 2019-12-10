#include <iostream>
using namespace std;
int main() {
    int input1, input2;
    while(cin >> input1 >> input2){
        int carry = 0;
        int count = 0;
        if (input1 == 0 && input2 == 0){
            break;
        }
        while (input1 || input2){
            carry = input1%10 + input2%10 + carry;
            input1 = input1/10;
            input2 = input2/10;
            carry = carry/10;
            if (carry){
                count++;
            }
        }
        if (count == 0){
            cout << "No carry operation." << endl;
        }
        else if (count == 1){
            cout << count << " carry operation." << endl;
        }
        else{
            cout << count << " carry operations." << endl;
        }
    }
    return 0;
}