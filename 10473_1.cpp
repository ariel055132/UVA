#include <iostream>
#include <cstring>
#include <algorithm>
#include <math.h>
#include <cmath>
#include <sstream>

using namespace std;

string dec2hex(string input) {
    string result;
    result.clear();
    int tmp = stoi(input);
    while(tmp > 0) {
        int remainder = tmp % 16;
        if (remainder == 10) {
            result = 'A' + result;
        } else if (remainder == 11) {
            result = 'B' + result;
        } else if (remainder == 12) {
            result = 'C' + result;
        } else if (remainder == 13) {
            result = 'D' + result;
        } else if (remainder == 14) {
            result = 'E' + result;
        } else if (remainder == 15) {
            result = 'F' + result;
        } else {
            result = to_string(remainder) + result;
        }
        tmp /= 16;
    }
    result = "0x" + result;
    return result;
}

/*
long long hex2dec(string input) {
    long long result = 0;
    string tmp;
    tmp.clear();
    for (int i = 2; i < input.length(); i++) {
        tmp += input[i];
    }
    //reverse(tmp.begin(), tmp.end());
    for (int j = tmp.length() - 1; j > 0; j--) {
        if (tmp[j] == 'A') {
            result = result + 10 * pow(16, tmp.length()-j);
        } else if (tmp[j] == 'B') {
            result = result + 11 * pow(16, tmp.length()-j);
        } else if (tmp[j] == 'C') {
            result = result + 12 * pow(16, tmp.length()-j);
        } else if (tmp[j] == 'D') {
            result = result + 13 * pow(16, tmp.length()-j);
        } else if (tmp[j] == 'E') {
            result = result + 14 * pow(16, tmp.length()-j);
        } else if (tmp[j] == 'F') {
            result = result + 15 * pow(16, tmp.length()-j);
        } else {
            result = result + (tmp[j]-'0') * pow(16, tmp.length()-j-1);
        }
        //result = result + (tmp[j]-'0')*pow(16, j);
    }
    return result;
}
*/
long long hex2dec(string input){
    long long result;
    stringstream ss;
    string input1;
    input1.clear();
    for (int i = 2; i < input.length(); i++) {
        input1 += input[i];
    }
    ss << input1;
    ss >> hex >> result;
    return result;
}

int main() {
    string input;
    while(cin >> input) {
        if (input[0] == '-') {
            break;
        } else if (input[0] >= '1' && input[0] <= '9') {
            string result = dec2hex(input);
            cout << result << endl;
        } else if (input[0] == '0' && input[1] == 'x') {
            long long result = hex2dec(input);
            cout << result << endl;
        }
    }
    return 0;
}
