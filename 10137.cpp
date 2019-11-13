#include <iostream>
#include <cmath>

using namespace std;
int main() {
    int no_students;
    double exp[1001]; // expenses of the students, maximum is 1000
    double average; // average price for each students to pay
    double total_exp; // total expense used in travel
    double exp1; // expense that over average
    double exp2; // expense that smaller than average
    while(cin >> no_students){
        average = 0, exp1 = 0, exp2 = 0, total_exp = 0;
        // a single line containing 0 follows the info for the last trip
        if (no_students == 0){
            break;
        }
        for (int i = 0; i < no_students; i++) {
            cin >> exp[i];
            total_exp = total_exp + exp[i]*100;
        }
        average = (double)total_exp/no_students;
        average = floor(average+0.5)/100.0;
        for (int i = 0; i < no_students; i++) {
            if (exp[i] > average){
                exp1 = exp1 + exp[i] - average;
            }
            else{
                exp2 = exp2 + average - exp[i];
            }
        }
        cout.precision(2); // output to 2 decimal places
        cout << "$";
        if (exp1 < exp2){
            cout << fixed << exp1 << endl;
        }
        else{
            cout << fixed << exp2 << endl;
        }
    }
    return 0;
}