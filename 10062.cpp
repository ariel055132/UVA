#include <iostream>
#include <string>

using namespace std;
int main() {
    string input;
    while(getline(cin, input)){
        int jump = 0;
        if (jump){
            cout << endl;
        }
        int store[127] = {0};
        int max=0; // maximum appearance of char
        
        // store the string as char and add into the array
        for (int i = 0; i < input.length(); i++) {
            store[input[i]]++;
        }
        // find the maximum appearance
        for (int i = 0; i < sizeof(store)/ sizeof(store[0]); i++) {
            if (store[i]>max){
                max = store[i];
            }
        }
        // Output the result
        for (int i = 1; i <= max ; i++) {
            for (int j = (sizeof(store)/ sizeof(store[0]))-1; j >= 0 ; j--) {
                if (store[j]==i){
                    cout << j << " " << store[j] << endl;
                }
            }
        }
        jump++;
    }
    return 0;
}