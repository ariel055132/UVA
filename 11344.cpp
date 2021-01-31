#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	for(int i = 0; i < n; i++) {
		string m; int s;
		cin >> m >> s;
		int num[s] = {0};
		for (int j = 0; j < s; j++) {
			cin >> num[j];
		}
		bool ans = true;
		for(int k = 0; k < s; k++) {
			int tmp = 0;
			for (int x = 0; x < m.length(); x++) {
				tmp *= 10;
				tmp += m[x]-'0';
				tmp %= num[k];
			}
			if (tmp != 0) {
				ans = false;
				break;
			}
		}


		cout << m << " - ";
		if (ans == true) {
			cout << "Wonderful." << endl;
		} else {
			cout << "Simple." << endl;
		}
	}
	return 0;
}
