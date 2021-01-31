#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main() {
	double n, p;
	while(cin >> n >> p) {
		// avoid error 1e+09 and 1000000000 by using setprecision
		cout << fixed << setprecision(0) << pow(p, 1.0/n) << endl;
	}
	return 0;
}
