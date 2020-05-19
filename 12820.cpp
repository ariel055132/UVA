#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
int alphabet[31]; // store the alphabet of the word

int main() {
    int n; // the number of words to check
    int caseno = 1; // the num of test case
    string word; //word input by the user
    while(cin >> n){
        int ans = 0; // no of cool word
        for (int i = 0; i < n; i++) {
            memset(alphabet, 0, sizeof(alphabet)); // init array to all zero
            bool coolword = true;
            cin >> word;
            for (int j = 0; j <= word.length()-1; j++) {
                alphabet[word[j]-96]++; // minus 96 instead of a(97)
            }
            sort(alphabet+1, alphabet+27);
            for (int k = 1; k <= 26; k++) {
                if ( alphabet[k]!=0&&alphabet[k-1]!=0  && alphabet[k]==alphabet[k-1] ){
                    coolword = false;
                    break;
                }
            }
            if (word.length()-1!=0 && coolword == true){
                ans++;
            }
        }
        cout << "Case " << caseno << ": " << ans << endl;
        caseno++;
        cout << (int)'a' << endl;
    }
    return 0;
}
