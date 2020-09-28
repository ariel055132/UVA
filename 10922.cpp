#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    string input_tmp;
    int input_val = 0;
    int count = 0;

    while(cin >> input) {
        if (input == "0") {
            break;
        } else {
            input_tmp = input;
            count = 0;
            while(true){
                input_val = 0;
                for(int i = 0; i < input.length(); i++){
                    input_val = input_val + (input[i]-'0');
                }
                //cout << input_val << endl;
                if(input_val % 9 == 0){
                    count++;
                    if (input_val == 9) {
                        break;
                    }else{
                        input = to_string(input_val);
                    }
                } else {
                    break;
                }
            }

            if (count == 0){
                cout << input_tmp << " is not a multiple of 9." << endl;
            }else {
                cout << input_tmp << " is a multiple of 9 and has 9-degree " << count << "." << endl;
            }
        }
    }
    return 0;
}
