#include <iostream>

using namespace std;

int main(){
    int testcase;
    string s;
    cin >> testcase;
    for (int i = 0; i < testcase; i++)
    {
        int odd = 0;
        int even = 0;
        for (int j = 0; j < 4; j++)
        {
            cin >> s;
            odd += (s[1]-'0')+(s[3]-'0');
            even += ((s[0]-'0')*2)/10 + ((s[0]-'0')*2)%10 + ((s[2]-'0')*2)/10 + ((s[2]-'0')*2)%10;
        }
        if ((odd+even)%10)
        {
            cout << "Invalid" << endl;
        }
        else{
            cout << "Valid" << endl;
        }
    }
    return 0;
}