#include <iostream>
#include <string>

using namespace std;

string keyboard = "1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./";
string message;

int main(){
    while(getline(cin, message)){
        // change the message into lowercase
        for (int k = 0; k < message.length(); k++)
        {
            message[k] = tolower(message[k]);
        }
        
        for (int i = 0; i < message.length(); i++)
        {
            if (message[i] == ' ')
            {
                cout << " ";
            }
            else{
                for (int j = 0; j < keyboard.length(); j++)
                {
                    if (keyboard[j] == message[i])
                    {
                        cout << keyboard[j-2] ;
                        break;
                    } 
                }
            }
        }
        cout << endl;
    }
    return 0;
}