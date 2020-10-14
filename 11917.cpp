#include <iostream>
#include <map>

using namespace std;

int main() {
    int t;
    int n;
    string subject;
    int day;
    int d;

    cin >> t;
    for (int case_no = 1; case_no <= t ; case_no++) {
        cin >> n;
        map<string, int> subj;
        subj.clear();
        for (int i = 0; i < n; i++) {
            cin >> subject >> day;
            subj[subject] = day;
        }
        cin >> d;
        cin >> subject;
        cout << "Case " << case_no << ": ";
        if (subj.count(subject) == true) {
            if (subj[subject] <= d) {
                cout << "Yesss" << endl;
            } else if (subj[subject] <= d + 5) {
                cout << "Late" << endl;
            } else {
                cout << "Do your own homework!" << endl;
            }
        } else {
            cout << "Do your own homework!" << endl;
        }
    }
    return 0;
}
