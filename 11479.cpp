#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;
    for (int case_num = 1; case_num <= t; case_num++) {
        long long side[3] = {0};
        cin >> side[0] >> side[1] >> side[2];
        sort(side, side + 3);
        cout << "Case " << case_num << ": ";
        if (side[0] <= 0 || side[0] + side[1] <= side[2]){
            cout << "Invalid" << endl;
        } else if (side[0] == side[2]) {
            cout << "Equilateral" << endl;
        } else if ( (side[0] == side[1]) || (side[1] == side[2]) ) {
            cout << "Isosceles" << endl;
        } else {
            if (side[0] + side[1] > side[2]) {
                cout << "Scalene" << endl;
            } else {
                cout << "Invalid" << endl;
            }

        }
    }
    return 0;
}

/*
int main() {
    int t;
    long long int s1, s2, s3;
    cin >> t;
    for (int case_no = 1; case_no <= t ; case_no++) {
        cin >> s1 >> s2 >> s3;
        if (s1 + s2 > s3 && )
    }
    return 0;
}
 */