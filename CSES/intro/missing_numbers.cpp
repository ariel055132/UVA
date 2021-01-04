#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n, no;
    vector<int> num;

    cin >> n;
    for (long long i = 0; i < n-1; i++)
    {
        cin >> no;
        num.push_back(no);
    }
    sort(num.begin(), num.end());
    for (int i = 1; i <= n; i++)
    {
        if (i != num[i-1]) 
        {
            cout << i <<  endl;
            return 0;
        }
    }
    return 0;
}