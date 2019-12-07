#include <iostream>

using namespace std;
int main() {
    int n; // number of test case
    int month_days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int m; // month
    int d; // day
    int total_days = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> m >> d;
        // Jan
        if (m == 1){
            total_days = d;
        }
        // months besides Jan
        else{
            for (int j = 0; j < m-1; j++) {
                total_days = total_days + month_days[j];
            }
            total_days = total_days + d;
        }
        if (total_days % 7 == 0){
            cout << "Friday" << endl;
        }
        else if (total_days % 7 == 1){
            cout << "Saturday" << endl;
        }
        else if (total_days % 7 == 2){
            cout << "Sunday" << endl;
        }
        else if (total_days % 7 == 3){
            cout << "Monday" << endl;
        }
        else if (total_days % 7 == 4){
            cout << "Tuesday" << endl;
        }
        else if (total_days % 7 == 5){
            cout << "Wednesday" << endl;
        }
        else if (total_days % 7 == 6){
            cout << "Thursday" << endl;
        }
        total_days = 0;
        m = 0;
        d = 0;
    }
    return 0;
}