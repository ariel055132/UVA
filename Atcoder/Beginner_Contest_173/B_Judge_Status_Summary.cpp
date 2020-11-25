#include <iostream>
using namespace std;
int main() {
    int n;
    int ac = 0;
    int wa = 0;
    int tle = 0;
    int re = 0;
    string status;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> status;
        if (status == "AC") {
            ac++;
        } else if (status == "WA") {
            wa++;
        } else if (status == "TLE") {
            tle++;
        } else if (status == "RE") {
            re++;
        }        
    }
    cout << "AC x " << ac << endl;
    cout << "WA x " << wa << endl;
    cout << "TLE x " << tle << endl;
    cout << "RE x " << re << endl;
    return 0;
}