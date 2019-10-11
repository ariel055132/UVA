#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int testcase;
    cin >> testcase;
    for (int i = 0; i < testcase; i++) {
        int r = 0; // relatives
        int streetno[500]; // street numbers
        int median = 0;
        int answer = 0;
        cin >> r;
        for (int j = 0; j < r; j++) {
            cin >> streetno[j];
        }
        // street number can be input no in ascending order @@
        sort(streetno, streetno+r);
        median = streetno[r/2];
        for (int j = 0; j < r; j++) {
            answer = answer + abs(streetno[j]-median);
        }
        cout << answer << endl;
    }

    return 0;
}