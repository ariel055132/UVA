// use unordered map to implement
// https://yuihuang.com/zj-e543/
#include <iostream>
#include <unordered_map>

using namespace std;

unordered_map <char, char> mp;
string input;

bool isPalindrome(){
    int len = input.length();
    for (int i = 0; i < len/2; i++) {
        if (input[i] != input[len - i - 1]){
            return false;
        }
    }
    return true;
}

bool isMirror(){
    int len = input.length();
    for (int i = 0; i <= len/2 ; i++) {
        if (mp[input[i]] != input[len - i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    string s1 = "AEHIJLMOSTUVWXYZ012358";
    string s2 = "A3HILJMO2TUVWXY501SEZ8";
    // build the translation table
    for (int i = 0; i < s1.length(); i++) {
        mp[s1[i]] = s2[i];
    }
    while(cin >> input){
        bool Palindrome = isPalindrome();
        bool Mirrored = isMirror();

        if (Palindrome == true && Mirrored == true){
            cout << input << " -- is a mirrored palindrome." << endl << endl;
        } else if (Palindrome == true && Mirrored == false) {
            cout << input << " -- is a regular palindrome." << endl << endl;
        } else if (Palindrome == false && Mirrored == true) {
            cout << input << " -- is a mirrored string." << endl << endl;
        } else {
            cout << input << " -- is not a palindrome." << endl << endl;
        }
    }
    return 0;
}
