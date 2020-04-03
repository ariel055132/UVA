#include <iostream>
using namespace std;
int main(){
    // n: the number of testcase
    // f: the number of farmers in the testcase
    // size: the size of farmyard in square metres
    // animal: the number of animals he owns
    // friendliness: farmers environment-friendliness
    int n, f, size, animal, friendliness;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int sum = 0; // the sum of money of all farmers can receive
        cin >> f;
        for (int j = 0; j < f; j++)
        {
            cin >> size >> animal >> friendliness;
            sum += size * friendliness;
        }
        cout << sum << endl;
    }
    
    return 0;
}