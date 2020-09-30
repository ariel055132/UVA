#include <iostream>
#include <string>
using namespace std;

// 65-90  'A' - 'Z'
// cout << (int)'A' << " " << (int)'Z' << endl;
// 97-122 'a' - 'z'
int main() {
    int testcase;
    int count = 0;
    string sentence;
    int alpha[26] = {0}; // save the char appear times

    cin >> testcase;
    cin.get(); // avoid output results after input testcase number
    while(count < testcase){
        getline(cin, sentence);
        for (int i = 0; i < sentence.length(); i++) {
            if (sentence[i] >= 'a' && sentence[i] <= 'z'){
                alpha[sentence[i]-'a']++; // -65 also OK
            }else if(sentence[i] >= 'A' && sentence[i] <= 'Z'){
                alpha[sentence[i]-'A']++; // -97 also OK
            }
        }
        count++;
    }

    int max = 0;

    // 找出最大值
    for (int i = 0; i < 26; i++) {
        if (alpha[i] > max){
            max = alpha[i];
        }
    }

    // print
    // descending order
    for (int i = max; i > 0 ; i--) {
        for (int j = 0; j < 26; j++) {
            if (alpha[j] == i){
                cout << (char)(j+65) << " " << i << endl;
            }
        }
    }

    return 0;
}
