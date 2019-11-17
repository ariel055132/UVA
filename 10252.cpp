#include <iostream>
#include <string>
using namespace std;

int main() {
    int ch1[26], ch2[26], result[26]; // get the times of abcd
    string input1, input2; // input line 1 and input line 2
    while(getline(cin, input1)){
        while(getline(cin, input2)){
            // initialize the arrays
            for (int i = 0; i < 26; i++) {
                ch1[i] = 0; ch2[i] = 0; result[i] = 0;
            }
            // get the appear times in input1
            for (int i = 0; i < input1.length(); i++) {
                ch1[input1[i]-'a']++;
            }
            // get the appear times in input2
            for (int i = 0; i < input2.length(); i++) {
                ch2[input2[i]-'a']++;
            }
            for (int i = 0; i < 26; i++) {
                if (ch1[i]<ch2[i]){
                    result[i] = ch1[i];
                }
                else{
                    result[i] = ch2[i];
                }
                if (result[i] > 0){
                    for (int j = 0; j < result[i]; j++) {
                        cout << char('a'+i) << endl;
                    }
                }
            }
        }
    }
    return 0;
}