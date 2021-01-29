#include <iostream>
#include <string>

using namespace std;

// stoi cannot uesd directly because stoi(s1[0]+s1[1]) is banned = =
int str2int(string &s, int start, int end) {
	int result = 0;
	string str = "";
	for (int i = start; i < start + end; i++) {
		str += s[i];
	}
	result = stoi(str);
	return result;
}

int main() {
	int t; // number of testcase
	string s1, s2; // today's date, birth date
	cin >> t;
	for (int i = 1; i <= t; i++) {
		cin >> s1 >> s2;
		int d1, d2; // today's date, birth date convert to int
		// day, month, year
		d1 = str2int(s1, 0, 2) + str2int(s1, 3, 2) * 31 + str2int(s1, 6, 4) * 380;
		d2 = str2int(s2, 0, 2) + str2int(s2, 3, 2) * 31 + str2int(s2, 6, 4) * 380;
		
		cout << "Case #" << i << ": ";
		if (d1 < d2) {
			cout << "Invalid birth date" << endl;
		} else if ((d1 - d2) / 380 > 130 ) {
			cout << "Check birth date" << endl;
		} else {
			cout << (d1 - d2) / 380 << endl;
		}
	}

	
	
	return 0;
}
