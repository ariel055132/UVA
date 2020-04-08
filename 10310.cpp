#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

typedef struct{
    double x;
    double y;
}point;

point hole[1000];
point g; // position of gopher
point d; // position of dog

double dist(point a, point b){
    return sqrt((a.y-b.y)*(a.y-b.y)+(a.x-b.x)*(a.x-b.x));
}

int main() {
    int n;
    while(cin >> n >> g.x >> g.y >> d.x >> d.y){
        bool find = false;
        for (int i = 0; i < n; i++) {
            cin >> hole[i].x >> hole[i].y;
        }
        for (int i = 0; i < n; i++) {
            if (2*dist(g,hole[i]) <= dist(d,hole[i]) ){
                find = true;
                cout << "The gopher can escape through the hole at " << "(" << fixed << setprecision(3) << hole[i].x << "," << setprecision(3) << hole[i].y << ")." << endl;
                break;
            }
        }
        if (find == false){
            cout << "The gopher cannot escape." << endl;
        }
    }
    return 0;
}
