#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int getSum(int n) {
	int sum = 1;
	for (int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) {
			sum += i;
			sum += n / i;
		}		
	}
	return sum;
}


int main() {
	cout << "PERFECTION OUTPUT" << endl;
	int n;
	while(cin >> n) {
		if (n == 0) {
			break;
		} 
		int sum = getSum(n);
		//cout << sum << endl;
		if (n == 1) {
			cout << setw(5) << n << "  " << "DEFICIENT" << endl;
		} else if (sum == n) {
			cout << setw(5) << n << "  " << "PERFECT" << endl;
		} else if (sum > n) {
			cout << setw(5) << n << "  " << "ABUNDANT" << endl;
		} else if (sum < n) {
			cout << setw(5) << n << "  " << "DEFICIENT" << endl;
		}
	}
	cout << "END OF OUTPUT" << endl;
	return 0;
}
