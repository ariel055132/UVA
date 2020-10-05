#include <iostream>

using namespace std;

int main() {
    int testcase;
    while(cin >> testcase) {
        if (testcase == 0) {
            break;
        }
        string c; // command
        int top = 1;
        int north = 2;
        int east = 4;
        int west = 3;
        int south = 5;
        int bottom = 6;
        for (int i = 0; i < testcase; i++) {
            cin >> c;
            if (c == "north") {
                north = top;
                top = south;
                south = 7 - north;
                // maybe not needed
                bottom = 7 - top;
            } if (c == "south") {
                south = top;
                top = north;
                north = 7 - south;
                // maybe not needed
                bottom = 7 - top;
            } if (c == "east") {
                east = top;
                top = west;
                west = 7 - east;
                // maybe not needed
                bottom = 7 - top;
            } if (c == "west") {
                west = top;
                top = east;
                east = 7 - west;
                // maybe not needed
                bottom = 7 - top;
            }
        }
        cout << top << endl;
    }
    return 0;
}
