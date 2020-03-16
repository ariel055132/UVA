#include <iostream>

using namespace std;

int main(){
    int n;
    while(cin >> n){
        if (n == 1)
        {
            cout << n << endl;
        }else{
            int ans = n; // output the no of coke he can drink
            while(n!=1){
                // he cannot borrow coke when he has only 1 coke only
                // he cannot return 2 coke to his friends
                // therefore, he can borrow coke when he has 2 cokes at the moment
                if (n == 2)
                {
                    n = n + 1;
                }
                ans = ans + n/3; // 
                n = n/3+n%3; // 
            }
            cout << ans << endl;
        } 
    }
    return 0;
}