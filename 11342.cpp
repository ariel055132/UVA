#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main() {
	map<int, vector<int>> table;
	map<int, vector<int>>::iterator iter;
	for (int i = 0; i < 250; i++) {
		if (i * i > 50000) {
			break;
		} for (int j = 0; j < 250; j++) {
			if (i * i + j * j > 50000) {
				break;
			} for (int k = 0; k < 250; k++) {
				int tmp = i * i + j * j + k * k;
				if (tmp > 50000) {
					break;
				} else if (table.count(tmp)) {
					
				} else {
					table[tmp] = {i, j, k};
				}
			}
		}
	}

	int n, k;
	cin >> n;
	for(int i = 0; i < n; i++) {
		cin >> k;
		if(table.count(k)) {
			for (auto i : table[k]) {
				cout << i << " ";
			}
			cout << endl;
		} else {
			cout << -1 << endl;
		}
	}
}
