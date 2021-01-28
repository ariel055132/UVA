#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int n;
	while(cin >> n) {
		vector<int>student(n);

		for(int i = 0; i < n; i++) {
			cin >> student[i];
		}
		sort(student.begin(), student.end());
		cout << student[0];
		for(int i = 1; i < n; i++) {
			cout << " " << student[i];
		}
		cout << endl;
		auto it = lower_bound(student.begin(), student.end(), 60);
		if (it == student.end()) {
			cout << *(--it) << endl;
			cout << "worst case" << endl;
		} else if (it == student.begin()) {
			cout << "best case" << endl;
			cout << *(it) << endl;
		} else {
			int num = *it;
			cout << *(--it) << endl;
			cout << num << endl;
		}
	}
}
