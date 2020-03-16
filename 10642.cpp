#include <iostream>

// Calculate the distance between (0,0) and the first point (s1) and second point (s2)
// Solution : s2-s1 
using namespace std;

int calDist(int x, int y){
    return (x+y)*(x+y+1)/2 + x;
}

int main(){
    int testcase;
    cin >> testcase;
    for (int i = 1; i <= testcase; i++)
    {
        int x1, y1; // coordinates of the source circle
        int x2, y2; // coordinates of the destination circle
        int d = 0;
        cin >> x1 >> y1 >> x2 >> y2;  
        cout << "Case " << i << ": " << calDist(x2,y2)-calDist(x1,y1) << endl;
    }
    
    return 0;
}