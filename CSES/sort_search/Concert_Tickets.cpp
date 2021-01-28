#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, m, p; // number of tickets, number of customers
	int max_price; // max price for each customer
	int ans; 
	cin >> n >> m;
	multiset<int, greater<int>>h;
	for (int i = 0; i < n; i++) {
		cin >> p;
		h.insert(p);
	}

	for (int i = 0; i < m; i++) {
		cin >> max_price;
		auto it = h.lower_bound(max_price);
		if (it == h.end()) {
			cout << "-1" << endl;
		}
		else {
			cout << *it << endl;
			h.erase(it);
		}
	}
	return 0;
}
