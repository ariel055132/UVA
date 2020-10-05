#include <iostream>
#include <map>

using namespace std;

int main() {
    int n; // no of commands
    while(cin >> n) {
        string c; // commands
        if (n == 0) {
            break;
        }
        map<string, int> dice;
        dice["curr_pos"] = 1;
        dice["north"] = 2;
        dice["west"] = 3;
        dice["east"] = 4;
        dice["south"] = 5;
        dice["bottom"] = 6;

        for (int i = 0; i < n; i++) {
            cin >> c;
            if (c == "north") {
                int tmp = dice["north"];
                dice["north"] = dice["curr_pos"];
                dice["curr_pos"] = dice["south"];
                dice["south"] = dice["bottom"];
                dice["bottom"] = tmp;
            } if (c == "east") {
                int tmp = dice["east"];
                dice["east"] = dice["curr_pos"];
                dice["curr_pos"] = dice["west"];
                dice["west"] = dice["bottom"];
                dice["bottom"] = tmp;
            } if (c == "west") {
                int tmp = dice["west"];
                dice["west"] = dice["curr_pos"];
                dice["curr_pos"] = dice["east"];
                dice["east"] = dice["bottom"];
                dice["bottom"] = tmp;
            } if (c == "south") {
                int tmp = dice["south"];
                dice["south"] = dice["curr_pos"];
                dice["curr_pos"] = dice["north"];
                dice["north"] = dice["bottom"];
                dice["bottom"] = tmp;
            }
        }
        cout << dice["curr_pos"] << endl;
    }
    return 0;
}
