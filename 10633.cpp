#include <iostream>
using namespace std;
int main()
{
    long long n;
    while(cin >> n){
        if (n == 0)
        {
            break;
        }
        else{
            int count = 0;
            for (int b = 9; b >= 0; b--)
            {
                if ((n-b)%9 == 0)
                {
                    if(count++){
                        cout << " ";
                    }
                    cout << (n-b)/9*10+b;
                }
                
            }
            cout << endl;
        }
    }
    return 0;
}
