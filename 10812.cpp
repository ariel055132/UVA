#include <iostream>

using namespace std;

int main(){
    int testcase;
    int s; // sum between two final scores
    int d; // difference between two final scores
    int ans1;
    int ans2;
    cin >> testcase;
    for (int i = 0; i < testcase; i++)
    {
        cin >> s >> d;
        ans1 = (s+d)/2;
        ans2 = (s-d)/2;
        if (s < d || (s+d)%2)
        {
            cout << "impossible" << endl;
        }
        else {
            cout << ans1 << " " << ans2 << endl;
        }
        
    }
    
    return 0;
}