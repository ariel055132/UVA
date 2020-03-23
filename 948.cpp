#include <iostream>

using namespace std;

int main(){
    // initialize fibonacci array
    // fib array size can be 39 only, 40 will over the limit of int, gg
    int fib[39];
    fib[0] = 1;
    fib[1] = 2;
    for (int i = 2; i < 39; i++)
    {
        fib[i] = fib[i-1]+fib[i-2];
    }

    int testcase = 0;
    int no = 0;
    cin >> testcase;
    for (int i = 0; i < testcase; i++)
    {
        cin >> no;
        cout << no << " = ";
        int flag = 0;
        for (int j = 38; j >= 0; j--)
        {
            if (no-fib[j]>=0)
            {
                cout << "1";
                no -= fib[j];
                flag = 1;
            }
            else if (flag == 1)
            {
                cout << "0";
            }  
        }
        cout << " (fib)" << endl;
    }  
    return 0;
}