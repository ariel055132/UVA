#include <iostream>
#include <algorithm>

using namespace std;
int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int side[3] = {0};
        for (int j = 0; j < 3; j++) {
            cin >> side[j];
        }
        sort(side, side + 3);
        if (side[0] + side[1] > side[2]) {
            cout << "OK" << endl;
        } else {
            cout << "Wrong!!" << endl;
        }
    }
    return 0;
}
