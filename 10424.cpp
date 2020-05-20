#include <iostream>
using namespace std;

int char2num(string str){
    int value = 0;
    for (int i = 0; i < str.length(); i++) {
        // isalpha(str[i]
        if ( (str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z') ){
            value += (int)tolower(str[i])- (int)'a' + 1;
        }
    }
    while (value >= 10){
        value = value / 10 + value % 10;
    }
    return value;
}

int main() {
    string s1;
    string s2;
    while(getline(cin, s1)){
        getline(cin, s2);
        /*
        for (int i = 0; i < s1.length(); i++) {
            s1[i] = tolower(s1[i]);
        }
        for (int i = 0; i < s2.length(); i++) {
            s2[i] = tolower(s2[i]);
        }
        */
        double value1 = char2num(s1);
        double value2 = char2num(s2);
        printf("%.2lf %%\n", min(value1, value2) / max(value1, value2) * 100);
    }
    return 0;
}
