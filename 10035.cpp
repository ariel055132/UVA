#include <iostream>
#include <string>

using namespace std;
int main() {
    string input1, input2; // number input by the user
    while(cin >> input1 >> input2){
        if (input1 == "0" && input2 == "0"){
            break;
        }
        else{
            int count = 0; // used for print the result
            int carry = 0;
            int input1_tmp = 0;
            int input2_tmp = 0;
            int i = input1.length()-1;
            int j = input2.length()-1;
            while(i >= 0 && j >= 0){
                input1_tmp = input1[i]-'0';
                input2_tmp = input2[j]-'0';
                if (input1_tmp + input2_tmp + carry < 10){
                    carry = 0;
                }
                else {
                    carry = 1;
                    count++;
                }
                i--; j--;
            }
            if ((i>=0)&&(j==-1)&&(input1.at(i)=='9')&&(carry==1)) count++;
            if ((i==-1)&&(j>=0)&&(input2.at(j)=='9')&&(carry==1)) count++;
            /*
            for (int i = input1.length()-1, j = input2.length(); i >= 0 && j >= 0; i--, j--) {
                input1_tmp = input1[i]-'0';
                input2_tmp = input2[j]-'0';
                if (input1_tmp + input2_tmp + carry < 10){
                    carry = 0;
                }
                else {
                    carry = 1;
                    count++;
                }
            }
            */
            // print the results according to the number of count.
            if (count==0){
                cout << "No carry operation." << endl;
            }
            else if (count == 1){
                cout << "1 carry operation." << endl;
            }
            else if (count > 1){
                cout << count << " carry operations" << endl;
            }
        }
    }
    return 0;
}