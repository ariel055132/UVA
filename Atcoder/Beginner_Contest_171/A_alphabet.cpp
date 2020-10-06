#include <iostream>

using namespace std;

int main() {
    char input;
    cin >> input;
    if (input >= 'a' && input <= 'z') {
        cout << "a" << endl;
    }
    if (input >= 'A' && input <= 'Z') {
        cout << "A" << endl;
    }
    return 0;
}
