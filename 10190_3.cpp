#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, m;
    while(cin >> n >> m) {
        if (n < 2 || m < 2) {
            cout << "Boring!" << endl;
            continue;
        } else {
            vector<int> num;
            while(n % m == 0) {
                num.push_back(n);
                n /= m;
            }
            if (n != 1){
                cout << "Boring!" << endl;
            } else {
                for (int i = 0; i < num.size(); i++) {
                    cout << num[i] << " ";
                }
                cout << "1" << endl;
            }
        }
    }
    return 0;
}
