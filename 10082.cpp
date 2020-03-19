#include <iostream>
using namespace std;
int main(){
    string keyboard = "1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";
    string input = "";
    while(getline(cin, input)){
        for (int i = 0; i < input.length(); i++)
        {
            // Print the space
            if (input[i] == ' ')
            {
                cout << ' ';
            }
            // Print the string
            else{
                for (int j = 0; j < keyboard.length(); j++)
                {
                    if (keyboard[j] == input[i])
                    {
                        cout << keyboard[j-1];
                        break;
                    }
                    
                }
                
            }
        }
        cout << endl;
    }
    return 0;
}