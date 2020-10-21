#include <iostream>

using namespace std;

int main() {
    int d; // d metres away
    int t; // t minutes from now
    int s; // s metres per minute
    cin >> d >> t >> s;
    if (d <= t * s) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}
