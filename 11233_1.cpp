#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
    int l, n; // description of the irregular words and its plural form, words that follow the rules
    map<string, string> verb;
    string base, plural; // base form and plural form of irregular words
    string input; // input after irregular words
    verb.clear();
    cin >> l >> n;
    for (int i = 0; i < l; i++) {
        cin >> base >> plural;
        verb[base] = plural;
    }
    for (int j = 0; j < n; j++) {
        cin >> input;
        int len = input.length();
        // 1. The word is in the list of irregular words, replace it with the given plural.
        // 2. Else if the word ends in a consonant (not a,e,i,o,u) followed by y, replace y with ies.
        // 3. Else if the word ends in o,s,ch,sh,x , append es in the word.
        // 4. Else append s to the word.
        if (verb.count(input) == true) {
            cout << verb[input] << endl;
        } else if (input[len-1] == 'y') {
            if (input[len-2] != 'a' && input[len-2] != 'e' && input[len-2] != 'i' && input[len-2] != 'o' && input[len-2] != 'u') {
                input[len-1] = 'i';
                cout << input << "es" << endl;
            } else {
                cout << input << "s" << endl;
            }
        } else if (input[len-1] == 'o' || input[len-1] == 's' || input[len-1] == 'x') {
            cout << input << "es" << endl;
        } else if ( (input[len-2] == 'c' && input[len-1] == 'h') || (input[len-2] == 's' && input[len-1] == 'h') ) {
            cout << input << "es" << endl;
        } else {
            cout << input << "s" << endl;
        }
    }
    return 0;
}
