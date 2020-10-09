#include <iostream>

// implementation of exclusive or (XOR)

using namespace std;
int main() {
    int a, b;
    while (cin >> a >> b) {
        cout << (a^b) << endl;
    }
    return 0;
}
