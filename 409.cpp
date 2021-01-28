#include <iostream>

using namespace std;

int main() {
	int k, e; // number of keyword, number of excuse
	int case_no = 1;
	while(cin >> k >> e) {
		string keyword[k];
		for (int i = 0; i < k; i++) {
			cin >> keyword[i];
		}
		string s;
		getline(cin ,s); // have no idea why need to add this before input execuses...

		int count[20] = {0}; // store the number of keywords in each excuse
		string excuse[e]; // store the excuse enter by user
		int max_keywords = 0;
		for (int i = 0; i < e; i++) {
			getline(cin , s);
			excuse[i] = s;
			string vocab = "";
			for (int j = 0; j < s.length(); j++) {
				char c = tolower(s[j]);
				if (c >= 'a' && c <= 'z') {
					vocab += c;
				} else { // spaces, not lowercase letters
					for (int m = 0; m < k; m++) {
						if (vocab == keyword[m]) {
							count[i]++;
							break;				
						}
					}
					vocab = "";
				}
			}
			max_keywords = max(max_keywords, count[i]);
		}

		// output the result
		cout << "Excuse Set #" << case_no << endl;
		case_no++;
		for (int i = 0; i < e; i++) {
			if (count[i] == max_keywords) {
				cout << excuse[i] << endl;
			}
		}
		cout << endl;
	}
	return 0;
}
