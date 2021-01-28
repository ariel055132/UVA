#include <iostream>
#include <map>


using namespace std;

int main() {
	string s;
	while(getline(cin, s)) {
		map<char, int> mp;
		map<char, int>::iterator iter;
		int max_char = 0;
		for(int i = 0; i < s.length(); i++) {
			if ((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z')) {
				mp[s[i]]++;
				max_char = max(max_char, mp[s[i]]);
			}
		}

		for (iter = mp.begin(); iter != mp.end(); iter++) {
			if (iter->second == max_char) {
				cout << iter->first;
			}
		}
		cout << " " << max_char << endl;	

	}
	return 0;
}
