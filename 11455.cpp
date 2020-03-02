#include <iostream>

/*
Determine the length of 4 sides if they can form a square/rectangle/quadrangle/none
*/
using namespace std;

int main(){
    int testcase;
    int line1, line2, line3, line4;
    cin >> testcase;
    for (int i = 0; i < testcase; i++)
    {
        cin >> line1 >> line2 >> line3 >> line4;
        // debug data: 5 9 4 0
        if (line1 == line2 && line2 == line3 && line3 == line4 && line4 == line1)
        {
            cout << "square" << endl;
        }
        else if (line1==line2 && line3==line4 || line1==line3 && line2==line4 || line1==line4 && line2==line3)
        {
            cout << "rectangle" << endl;   
        }         
        else if (line1+line2+line3 <= line4 || line1+line2+line4 <= line3 || line1+line3+line4 <= line2 || line2+line3+line4 <= line1){
            cout << "banana" << endl;
        }
        else{
            cout << "quadrangle" << endl;
        }
    }
    return 0;
}