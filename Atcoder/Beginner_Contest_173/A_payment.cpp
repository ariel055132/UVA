#include <iostream>

using namespace std;

int main(){
	int n;
	int ans = 1000;
	cin >> n;
	while(ans < n) {
		ans += 1000;
	}	
	cout << ans - n << endl;
	
	
	return 0;
}
