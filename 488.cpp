#include <iostream>
using namespace std;
// Triangular wave
// There is a blank line after each separate waveform, excluding the last one.
int main() {
    int testcase;
    int ampitude;  // the number that triangle will print
    int frequency; // the no of triangles will be printed
    int top = 1;
    cin >> testcase;
    for (int i = 0; i < testcase; i++) {
        cin >> ampitude >> frequency;
        // print times
        for (int j = 0; j < frequency; j++) {
            if (top == 0){
                cout << endl;
            }
            // print the number of rows
            // upper triangle
            for (int k = 1; k <= ampitude; k++) {
                // numbers in each row
                for (int m = 0; m < k ; m++) {
                    cout << k;
                }
                cout << endl;
            }
            // lower triangle
            for (int k = ampitude-1; k > 0 ; k--) {
                for (int m = 0; m < k; m++) {
                    cout << k;
                }
                cout << endl;
            }
            top = 0;
        }
    }
    return 0;
}


