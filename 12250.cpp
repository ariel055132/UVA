#include <iostream>

using namespace std;

int main() {
    string input, ans;
    int cases = 1;
    while(cin >> input) {
        if (input == "#") {
            break;
        } else if (input == "HELLO") {
            ans = "ENGLISH";
        } else if (input == "HOLA") {
            ans = "SPANISH";
        } else if (input == "HALLO") {
            ans = "GERMAN";
        } else if (input == "BONJOUR") {
            ans = "FRENCH";
        } else if (input == "CIAO") {
            ans = "ITALIAN";
        } else if (input == "ZDRAVSTVUJTE") {
            ans = "RUSSIAN";
        } else {
            ans = "UNKNOWN";
        }

        cout << "Case " << cases << ": " << ans << endl;
        cases++;
    }   
    return 0;
}