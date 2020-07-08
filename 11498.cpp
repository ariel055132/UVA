#include <iostream>
using namespace std;
int main(){
    int k;   // number of queries, terminate when k = 0
    int n,m; // coordinates of the division point
    int x,y; // coordinates of residence

    while (cin >> k) {
        if (k == 0) {
            break;
        } else {
            cin >> n >> m;
            for (int i = 0; i < k; i++) {
                cin >> x >> y;
                /* divisa: residence is on one of the border lines
                   NO (means NW): residence is in Northwestern Nlogonia
                   NE: residence is in Northeastern Nlogonia
                   SO (means SW): residence is in Southwestern Nlogonia
                */
                if (x == n || y == m) {
                    cout << "divisa" << endl;
                } else if (x > n && y > m) {
                    cout << "NE" << endl;
                } else if (x > n && y < m) {
                    cout << "SE" << endl;
                } else if (x < n && y < m) {
                    cout << "SO" << endl;
                } else if (x < n && y > m) {
                    cout << "NO" << endl;
                }             
            }
        }
    }
    return 0;
}