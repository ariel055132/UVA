#include <iostream>

using namespace std;

int main() {
	string s; 
	while(getline(cin, s)) {
		int ans = 0;
		bool isLetter = false;
		for(int i = 0; i < s.length(); i++) {
			if (isalpha(s[i])) {
				isLetter = true;
			} else {
				if (isLetter == true) {
					ans++;
					isLetter = false;
				} 
			}
		}
		if (isLetter == true) {
			ans++;
		}
		cout << ans << endl;
	}
}
