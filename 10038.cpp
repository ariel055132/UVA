#include <iostream>

using namespace std;
int main(){
    int testcase;
    while (cin >> testcase)
    {
        int number[3000] = {0};
        int jolly[3000] = {0};
        int flag = 1;
        for (int i = 1; i <= testcase; i++)
        {
            cin >> number[i];
        }
        for (int i = 1; i <= testcase-1; i++)
        {
            jolly[abs(number[i+1]-number[i])] = 1;
        }
        for (int i = 1; i <= testcase-1; i++)
        {
            if (jolly[i]==0)
            {
                flag = 0;
                break;     
            }  
        }
        if (flag == 1)
        {
            cout << "Jolly" << endl;
        }
        else{
            cout << "Not jolly" << endl;
        }
    }
    
}