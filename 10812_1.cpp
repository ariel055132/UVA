#include <iostream>
using namespace std;
int main(){
    int testcase;
    int s; // sum between two final scores
    int d; // difference between two final scores
    cin >> testcase;
    for (int i = 0; i < testcase; i++)
    {
        cin >> s >> d;
        // ans : (s+d)/2 || (s-d)/2
        int x = s + d;
        int y = s - d; 
        if (x < 0 || y < 0 || (x%2!=0 || y%2!=0))
        {
            cout << "impossible" << endl;
        }
        else{
            cout << x/2 << " " << y/2 << endl;
        }
          
    }
    
}