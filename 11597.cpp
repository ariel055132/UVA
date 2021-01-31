#include <iostream>

using namespace std;

int main() {
	int n;
	int case_no = 1;
	while(cin >> n) {
		if (n == 0) {
			break;
		}
		cout << "Case " << case_no << ": " << n / 2 << endl;
		case_no++;
	}
	return 0;
}
