#include <iostream>

using namespace std;

int main() {
    int cases = 0;
    string input = "";
    cin >> cases;
    for(int i = 1; i <= cases; i++) {
        cin >> input;

        char ch = '\0';
        int num = 0;

        cout << "Case " << i << ": ";
        for (int j = 0; j < input.length(); j++)
        {
            if (isalpha(input[j])) 
            {
                for (int k = 0; k < num; k++)
                {
                    cout << ch;
                }
                ch = input[j];
                num = 0;
            } 
            else 
            {
                num *= 10;
                num += input[j] - '0';
            }
        }
        while(num != 0) {
            cout << ch;
            num--;
        }
        cout << endl;
    }
    return 0;
}