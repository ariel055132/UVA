#include<iostream>

using namespace std;

int main() {
	int n;
	while(cin >> n) {
		string l;
		int ans = 20000000;;
		if (n == 0) {
			break;		
		}
		cin >> l;
		int r = -1, d = -1; // restaurant, drug store
		for (int i = 0; i < l.length(); i++) {
			if (l[i] == 'Z') {
				ans = 0;
				break;
			} else if (l[i] == 'R') {
				if (d >= 0) {
					ans = min(ans, i - d);
				}
				r = i;
			} else if (l[i] == 'D') {
				if (r >= 0) {
					ans = min(ans, i - r);
				}
				d = i;
			}
		}
		cout << ans << endl;
	}
	return 0;
}
