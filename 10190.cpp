#include <iostream>

using namespace std;

int main(){
    long long n, m;
    while(cin >> n >> m){
        if (n < 2 || m < 2)
        {
            cout << "Boring!" << endl;
            continue;
        }
        int result[50] = {0};
        int result_index = 0;
        while(n % m == 0){
            result[result_index] = n;
            result_index++;
            n /= m;
        }
        if (n != 1){
            cout << "Boring!" << endl;
        }
        else{
            for (int i = 0; i < result_index; i++)
            {
                cout << result[i] << " ";
            }
            cout << "1" << endl;
        }
    
}
    return 0;
}