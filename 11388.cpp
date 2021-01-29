#include <iostream>

using namespace std;

int main() {
	int t;
	int n, m;
	cin >> t;
	for(int i = 0; i < t; i++) {
		cin >> n >> m;
		if (m % n == 0) {
			cout << n << " " << m << endl;
		} else {
			cout << -1 << endl;
		}
	}
}
