#include <iostream>
#include <string>

using namespace std;
int main() {
    string input;
    int flag = 0;
    while(getline(cin, input)){
        for (int i = 0; i < input.length(); i++) {
            if (input[i] == '\"'){
                if (!flag){
                    cout << "``";
                    flag = !flag;
                }
                else{
                    cout << "''";
                    flag = !flag;
                }
            }
            else{
                cout << input[i];
            }
        }
        cout << endl;
    }
    return 0;
}