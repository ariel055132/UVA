#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int n;
	while(cin >> n) {
		if (n == 0) {
			break;
		}
		vector<int> age(n);
		for(int i = 0; i < n; i++) {
			cin >> age[i];
		}
		sort(age.begin(), age.end());
		for(int i = 0; i < n; i++) {
			if (i == n - 1) {
				cout << age[i] << endl;
			} else {
				cout << age[i] << " ";
			}
		}
	}
	return 0;
}
