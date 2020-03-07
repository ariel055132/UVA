#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;
// Find the distance between two satellite in chord and arc.
int main(){
    double s; // distance of the satellite from the surface from the earth
    double a; // angle that the satellites make with the center of earth
    string unit; // degree(deg) or minute(min)

    while (cin >> s >> a >> unit)
    {
        double PI = 2 * acos(0);
        // unit translation
        if (unit == "min")
        {
            a = a/60; // degree = min/60
        }
        // 夾角超過180度則用360去減夾角
        if (a > 180)
        {
            a = 360 - a;
        }
        double r = 6440 + s; // radius
        double arc = 2 * PI * r * a / 360;
        double chord = sqrt(r*r+r*r-2*r*r*cos(PI*a/180.));
        cout << fixed << setprecision(6) << arc << " " << chord << endl;
    }
    return 0;
}