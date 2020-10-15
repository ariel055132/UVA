#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    /*
     * n : bus drivers, morning and evening bus routes
     * d : max total route length for a day for free
     * r : paid after the first d hours at a flat r taka/hour
     */
    int n, d, r;
    while(cin >> n >> d >> r) {
        if (n == 0 && d == 0 && r == 0) {
            break;
        }
        int morning[n];
        int evening[n];
        for (int i = 0; i < n; i++) {
            cin >> morning[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> evening[i];
        }
        sort(morning, morning + n);
        /*
         * bool cmp(int x, int y){
         *     return x > y;
         * }
         * sort(evening, evening + n, cmp);
         */
        sort(evening, evening + n);
        reverse(evening, evening + n);

        int price = 0;
        for (int i = 0; i < n; i++) {
            if (morning[i] + evening[i] > d) {
                price += (morning[i] + evening[i] - d)*r;
            }
        }
        cout << price << endl;
    }
    return 0;
}
