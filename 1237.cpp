#include <iostream>
using namespace std;

typedef struct {
    string brand; // car maker
    int lower; // lowest price
    int higher; // higher price
}db;

db maker[10005];

int main() {
    int t; // number of testcases follow
    int d; // size of database
    int q; // number of query
    int p; // query price
    string ans = "";
    int no_maker = 0;
    cin >> t;

    for (int i = 0; i < t; i++) {
        cin >> d;
        for (int j = 0; j < d; j++) {
            cin >> maker[j].brand >> maker[j].lower >> maker[j].higher;
        }

        cin >> q;

        for (int k = 0; k < q; k++) {
            cin >> p;
            // traversal the database
            for (int l = 0; l < d; l++) {
                if (maker[l].lower <= p && p <= maker[l].higher) {
                    ans = maker[l].brand;
                    no_maker++;
                }
            }
            if (no_maker == 1) {
                cout << ans << endl;
                no_maker = 0;
            } else {
                cout << "UNDETERMINED" << endl;
                no_maker = 0;
            }
        }
        no_maker = 0;
        if(i != t-1){
            cout << endl;
        }
    }
    return 0;
}
