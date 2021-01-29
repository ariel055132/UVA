#include <iostream>

using namespace std;

int main() {
	int n;
	while(cin >> n) {
		if (n == 0) {
			break;
		}
		int num[n] = {0};
		long long ans = 0;
		for(int i = 0; i < n; i++) {
			cin >> num[i];
		}
		for (int i = 0; i < n - 1; i++) {
			ans += abs(num[i]);
			num[i+1] += num[i];
		}
		cout << ans << endl;
	}
	return 0;
}
