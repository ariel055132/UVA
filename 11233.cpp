#include <iostream>
#include <map>
#include <cstring> // strlen()
#include <string>

using namespace std;

// null must be add into char array which presented string (?)
// you can cin char array directly --> cin >> words;

int main()
{
    int l, n;
    cin >> l >> n;
    map<string, string> plural;    // save the plural form of the irregular words
    string base_form, plural_form; // base form and plural form of irregular words
    char words[25];
    string answer;
    for (int i = 0; i < l; i++)
    {
        cin >> base_form >> plural_form;
        plural[base_form] = plural_form;
    }
    for (int i = 0; i < n; i++)
    {
        cin >> words;

        // find the word in map plural
        // .end() --> function in map
        if (plural.end() != plural.find(words))
        {
            answer = plural[words];
            cout << answer << endl;
            continue;
        }

        //int len = words.length(); // len of word
        int len = strlen(words);

        // ended in a consonant(besides a,e,i,o,u) followed by y, replace y with ies
        if (words[len - 1] == 'y' && words[len - 2] != 'a' && words[len - 2] != 'e' && words[len - 2] != 'i' && words[len - 2] != 'o' && words[len - 2] != 'u')
        {
            words[len - 1] = 'i';
            words[len] = 'e';
            words[len + 1] = 's';
            words[len + 2] = '\0'; // null, added in char array present string
        }
        // ended with 'o', 's,  'x' --> +es
        else if (words[len - 1] == 'o' || words[len - 1] == 's' || words[len - 1] == 'x')
        {
            words[len] = 'e';
            words[len + 1] = 's';
            words[len + 2] = '\0';
        }
        // ended with 'ch', 'sh' --> +es
        else if (words[len - 1] == 'h' && (words[len - 2] == 'c' || words[len - 2] == 's'))
        {
            words[len] = 'e';
            words[len + 1] = 's';
            words[len + 2] = '\0';
        }
        // else append 's' to the end
        else
        {
            words[len] = 's';
            words[len + 1] = '\0';
        }
        cout << words << endl;
    }
    return 0;
}
