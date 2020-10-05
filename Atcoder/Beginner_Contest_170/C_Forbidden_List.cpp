#include <iostream>

using namespace std;

int main() {
    int x, n;
    int num[105] = {0}; // store the appear times of number
    int num_index = 0;
    int left, right; // two pointers
    cin >> x >> n;
    if (n == 0) {
        cout << x << endl;
        return 0;
    }
    for (int j = 0; j < n; j++) {
        cin >> num_index;
        num[num_index]++;
    }
    left = right = x;
    while(true){
        if (num[left] == 0) {
            cout << left << endl;
            break;
        }
        if (num[right] == 0) {
            cout << right << endl;
            break;
        }
        left--;
        right++;
    }
    return 0;
}
