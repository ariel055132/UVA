#include <iostream>
using namespace std;
int main() {
    int testcase; // number of cases
    int no_days; // number of days, maximum number is 3650
    int no_party; // number of parties, maximum number is 100
    int hartals[101]; // record hartal for party i
    int result = 0; // answer for us to cout
    cin >> testcase;
    for (int i = 0; i < testcase; i++) {
        cin >> no_days;
        cin >> no_party;
        for (int j = 0; j < no_party; j++) {
            cin >> hartals[j];
        }
        result = 0; // initialize the result
        for (int k = 1; k <= no_days; k++) {
            // skip Friday and Saturday
            if (k % 7 == 6){
                k++;
                continue;
            }
            for (int j = 0; j < no_party; j++) {
                if (k % hartals[j] == 0){
                    result++;
                    break;
                }
            }
        }
        cout << result << endl;
    }
    return 0;
}