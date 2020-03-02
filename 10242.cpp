#include <iostream>
#include <iomanip> 
using namespace std;

int main(){
    double x1,y1,x2,y2,x3,y3,x4,y4,x,y;
    while(cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4){
        x = x1 + x2 + x3 + x4;
        y = y1 + y2 + y3 + y4;
        // Point 1 (x1,y1) -- Point 3 (x3,y3) // Point 1 (x1,y1) -- Point 4 (x4,y4)
        if ((x1==x3&&y1==y3)||(x1==x4&&y1==y4))
        {
            x = x-x1*3;
            y = y-y1*3;
        }
        // Point 2 (x2,y2) -- Point 3 (x3,y3)
        else{
            x = x-x2*3;
            y = y-y2*3;
        }
        cout << fixed << setprecision(3) << x << " " << y << endl;
    }
    return 0;
}