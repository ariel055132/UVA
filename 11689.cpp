#include <iostream>

using namespace std;

int main() {
	int n, e, f, c, ans;
	cin >> n;
	for(int i = 0; i < n; i++) {
		cin >> e >> f >> c;
		e += f;
		ans = 0;
		while(e >= c) {
			ans += e / c;
			e = e / c + e % c;
		}
		cout << ans << endl;
	}
	return 0;
}
