#include <iostream>
#include <map>

using namespace std;

int main(){
    map<char, int> mp;
    mp['W'] = 64;
    mp['H'] = 32;
    mp['Q'] = 16;
    mp['E'] = 8;
    mp['S'] = 4;
    mp['T'] = 2;
    mp['X'] = 1;
    
    int sum; // sum up the data between /
    int cnt; // count the number of measures that have the right duration
    string input;
    while(cin >> input) {
    	if (input == "*") {
	    break;
	}
	sum = 0;
	cnt = 0;
	for(int i = 0; i < input.length(); i++) {
	    if (input[i] == '/') {
	    	if (sum == 64) {
		    cnt++;
		}
		sum = 0;
	    } else {
	    	sum += mp[input[i]];
	    }
	}
	cout << cnt << endl;
    }
    return 0;
}
