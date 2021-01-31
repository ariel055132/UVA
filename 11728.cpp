#include <iostream>

using namespace std;

int main() {
	int f[1001] = {0};
	for(int i = 1; i < 1001; i++) {
		for(int j = 1; j <= i; j++) {
			if (i % j == 0) {
				f[i] += j;
			}
		}
	}

	int s, case_no = 1;;
	while(cin >> s) {
		if (s == 0) {
			break;
		} 
		int ans = -1;
		for (int i = 1000; i > 0; i--) {
			if (f[i] == s) {
				ans = i;
				break;
			}
		}
		cout << "Case " << case_no << ": " << ans << endl;
		case_no++;
	}
}
