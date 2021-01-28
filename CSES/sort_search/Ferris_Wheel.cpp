#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, x; // the number of children, the max allowed weight
	int ans = 0;
	cin >> n >> x;
	vector<int>w(n); // the weight of each child
	for(int i = 0; i < n; i++){
		cin >> w[i];
	}
	sort(w.begin(), w.end());
	int i = 0;
	int j = n - 1;
	while (i <= j) {
		if (w[i] + w[j] <= x) {
			ans++;
			i++; j--;
		} else {
			j--; ans++;
		}
	}
	cout << ans << endl;

}
