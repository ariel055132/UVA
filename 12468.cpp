#include <iostream>

using namespace std;

int main() {
	int start, end;
	while(cin >> start >> end) {
		if (start == -1 && end == -1) {
			break;
		}
		if (start > end) {
			swap(start, end);
		}
		int ans;
		ans = min(end-start, 100-end+start);
		cout << ans << endl;
	}
	return 0;
}
