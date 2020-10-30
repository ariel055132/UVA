#include <iostream>

using namespace std;

typedef struct {
    double x1, y1, x2, y2;
}coord;

coord rect[12];

int main() {
    char r;
    double x, y;
    int rect_idx = 1; // set as 1 to match
    while(cin >> r){
        if (r == '*') {
            break;
        }
        cin >> rect[rect_idx].x1 >> rect[rect_idx].y1 >> rect[rect_idx].x2 >> rect[rect_idx].y2;
        rect_idx++;
    }
    rect_idx--;
    int pt = 1;
    while(cin >> x >> y) {
        if(x == 9999.9 && y == 9999.9) {
            break;
        }
        bool found = false;
        for (int i = 1; i <= rect_idx; i++) {
            if ( x > rect[i].x1 && x < rect[i].x2 && y < rect[i].y1 && y > rect[i].y2) {
                found = true;
                cout << "Point " << pt << " is contained in figure " << i << endl;
            }
        }
        //985 is not contained in any figure沒空白，其他要空白......
        if (found == false) {
            if (pt == 985) {
                cout << "Point " << pt << " is not contained in any figure" << endl;
            } else {
                cout << "Point " << pt << " is not contained in any figure " << endl;
            }
        }
        pt++;
    }
    return 0;
}
