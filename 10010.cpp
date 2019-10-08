#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int r, c; // row, column
string matrix[50];

// consider out of bound or not
bool bound(int row, int column){
    if(((row>=0)&&(row<r))&&((column>=0)&&(column<c))){
        return true;
    }
    else{
        return false;
    }
}

// find the string in 8 directions
bool find(int row, int column, string word){
    for (int direction = 0; direction < 8; direction++) {
        int i;
        switch(direction){
            case 0:
                // up
                if(bound(row-(word.length()-1),column) == true){
                    for (i = 1; i < word.length(); i++) {
                        if (word[i] != matrix[row-i][column]){
                            break;
                        }
                    }
                    if (i == word.length()){
                        return true;
                    }
                }
                break;
            case 1:
                // left upward
                if (bound(row-(word.length()-1), column-(word.length()-1)) == true){
                    for (i = 1; i < word.length(); i++) {
                        if (word[i] != matrix[row-i][column-i]){
                            break;
                        }
                    }
                    if (i == word.length()) {
                        return true;
                    }
                }
                break;
            case 2:
                // left
                if (bound(row, column-(word.length()-1)) == true){
                    for(i = 1; i < word.length(); i++){
                        if (word[i] != matrix[row][column-i]){
                            break;
                        }
                    }
                    if (i == word.length()){
                        return true;
                    }
                }
                break;
            case 3:
                // left downward
                if (bound(row+word.length()-1, column-(word.length()-1)) == true){
                    for (i = 1; i < word.length(); i++) {
                        if (word[i] != matrix[row+i][column-i]){
                            break;
                        }
                    }
                    if (i == word.length()){
                        return true;
                    }
                }
                break;
            case 4:
                // down
                if (bound(row+word.length()-1, column)){
                    for (i = 1; i < word.length(); i++) {
                        if (word[i] != matrix[row+i][column]){
                            break;
                        }
                    }
                    if (i == word.length()){
                        return true;
                    }
                }
                break;
            case 5:
                // right downward
                if (bound(row+word.length()-1, column+word.length()-1)){
                    for (i = 1; i < word.length(); i++) {
                        if (word[i] != matrix[row+i][column+i]){
                            break;
                        }
                    }
                    if (i == word.length()){
                        return true;
                    }
                }
                break;
            case 6:
                // right
                if (bound(row, column+word.length()-1)){
                    for (i = 1; i < word.length(); i++) {
                        if (word[i] != matrix[row][column+i]){
                            break;
                        }
                    }
                    if (i == word.length()){
                        return true;
                    }
                }
                break;
            case 7:
                // right upward
                if (bound(row-(word.length()-1), column+word.length()-1)){
                    for (i = 1; i < word.length(); i++) {
                        if (word[i] != matrix[row-i][column+i]){
                            break;
                        }
                    }
                    if (i == word.length()){
                        return true;
                    }
                }
                break;
            default:
                return false;
        }
    }
    return false;
}

int main() {
    int testcase, word_testcase;
    string word;
    bool success;
    cin >> testcase;
    //getline(cin,blank);
    //getline(cin,blank);
    for (int times = 0; times < testcase; times++) {
        cin.ignore();
        cin >> r >> c;
        cin.ignore();
        //getline(cin,blank);
        for (int i = 0; i < r; i++) {
            getline(cin, matrix[i]);
        }

        // lowercast and uppercast letter should be considered as the same
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                matrix[i][j] = tolower(matrix[i][j]);
            }
        }

        // There is also a blank line between two consecutive inputs.
        if (times > 0) {
            cout << endl;
        }

        /*
         * output the matrix --> OK
        for (int l = 0; l < r; l++) {
            for (int i = 0; i < c; i++) {
                cout << matrix[l][i] << " ";
            }
            cout << endl;
        }
        */
        cin >> word_testcase;
        cin.ignore();
        //getline(cin,blank);
        for (int j = 0; j < word_testcase; j++) {
            getline(cin, word);
            success = false;
            for (int i = 0; i < word.length(); ++i) {
                word[i] = tolower(word[i]);
            }
            // cout << word;
            for (int j = 0; j < r; j++) {
                for (int k = 0; k < c; k++) {
                    // find the first letter of the word
                    if (matrix[j][k] == word[0]) {
                        if (find(j, k, word) == true) {
                            success = true;
                            cout << j+1 << " " << k+1 << endl;
                            break;
                        }
                    }
                }
                if (success)
                    break;
            }
        }
    }
    return 0;
}