#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    while (cin >> n)
    {
        int no[n] = {0};      // array for user to input
        int no1[n - 1] = {0}; // array after operation
        for (int i = 0; i < n; i++)
        {
            cin >> no[i];
        }
        /*
        for (int i = 0; i < n; i++)
        {
            if (i == n-1)
            {
                cout << no[i];
            }
            else{
                cout << no[i] << " ";
            }
        }
        cout << endl;
        */
        for (int i = 0; i < n - 1; i++)
        {
            no1[i] = abs(no[i] - no[i + 1]);
        }
        sort(no1, no1 + n - 1);

        bool isJolly = true;

        for (int i = 0; i < n-1; i++)
        {
            if (no1[i] != i+1)
            {
                isJolly = false;
                break;
            }      
        }
        
        if (isJolly == true)
        {
            cout << "Jolly" << endl;
        }else{
            cout << "Not jolly" << endl;
        }
        
    }
    return 0;
}