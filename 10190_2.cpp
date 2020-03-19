#include <iostream>
#include <vector>

using namespace std;
// Time limit when using vector
int main(){
    long long n,m;
    while(cin >> n >> m){
        vector<int> number;
        while(n % m == 0){
            number.push_back(n);
            n /= m;
        }
        if (n != 1)
        {
            cout << "Boring!" << endl;
        }else{
            for (int i = 0; i < number.size(); i++)
            {
                cout << number[i] << " ";
            }
            cout << "1" << endl;
        }
        
    }
    return 0;
}