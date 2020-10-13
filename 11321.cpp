#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

typedef struct {
    int num; // the original number
    int mod; // num % m
    int evenOdd; // num is odd / even?
}data;

// a < b
bool cmp(data a, data b) {
    if (a.mod == b.mod) {
        // two odd numbers --> bigger odd number first
        if (a.evenOdd == 1 && b.evenOdd == 1) {
            return a.num > b.num;
        }
        // two even numbers --> smaller even num first
        if (a.evenOdd == 0 && b.evenOdd == 0) {
            return a.num < b.num;
        }
        // one odd, one even --> odd number first
        if (a.evenOdd == 1 && b.evenOdd == 0) {
            return true;
        }
        if (a.evenOdd == 0 && b.evenOdd == 1) {
            return false;
        }
    }
    return a.mod < b.mod;
}

int main() {
    int n, m;
    int no;
    while(cin >> n >> m) {
        if (n == 0 && m == 0) {
            cout << "0 0" << endl;
            break;
        }
        data arr[n];
        cout << n << " " << m << endl;
        for (int i = 0; i < n; i++) {
            cin >> no;
            arr[i].num = no;
            arr[i].mod = no % m;
            arr[i].evenOdd = abs(no % 2); // 1 -> odd, 0 -> even
        }
        sort(arr, arr+n, cmp);
        for (int j = 0; j < n; j++) {
            cout << arr[j].num << endl;
        }
    }
    return 0;
}
