#include <iostream>

using namespace std;

int main() {
    int n;
    int wood[10] = {0}; // store the height of wood
    cin >> n;
    cout << "Lumberjacks:" << endl;
    for (int i = 0; i < n; i++) {
        bool ordered = true; // in order
        for (int j = 0; j < 10; j++) {
            cin >> wood[j];
        }

        // check the sequence is in descending order
        if (wood[1] > wood[2]) {
            for (int k = 0; k < 9; k++) {
                if (wood[k] < wood[k+1]) {
                    ordered = false;
                }
            }
        }

        // check the sequence is in ascending order
        if (wood[1] < wood[2]) {
            for (int k = 0; k < 9; k++) {
                if (wood[k] > wood[k+1]) {
                    ordered = false;
                }
            }
        }

        if (ordered == true){
            cout << "Ordered" << endl;
        } else {
            cout << "Unordered" << endl;
        }
    }
    return 0;
}
