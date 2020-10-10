#include <iostream>
#include <set>

using namespace std;
int main() {
    int t; // no of testcase,
    long long n; // number
    int tmp;
    int case_no = 1; // case number
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> n;
        cout << "Case #" << case_no << ": " << n ;
        case_no++;
        set<long long> num;
        while(n != 1) {
            if (num.count(n)) {
                break;
            }
            num.insert(n);
            tmp = 0;
            while(n >= 10) {
                tmp += (n%10)*(n%10);
                n /= 10;
            }
            tmp += n*n;
            n = tmp;
        }
        if (n == 1) {
            cout << " is a Happy number." << endl;
        } else {
            cout << " is an Unhappy number." << endl;
        }
    }
    return 0;
}
