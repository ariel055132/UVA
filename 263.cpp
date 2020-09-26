#include <iostream>
#include <algorithm> // sort
#include <cstring>   // stoi
#include <set>

using namespace std;

// descending order
bool cmp(char a, char b){
    return a > b;
}

int main() {
    string str1;
    set<long long> same;
    while(cin >> str1){
        if (str1 == "0") {
            break;
        }
        same.clear(); // empty the set (initialization)
        cout << "Original number was " << str1 << endl;
        long long num1 = 0; // 1. arranging its digits in descending order
        long long num2 = 0; // 2. arranging its digits in ascending order
        while (true) {
           sort(str1.begin(), str1.end(), cmp); // des order
           num1 = stoi(str1);
           sort(str1.begin(), str1.end());      // asc order
           num2 = stoi(str1);
           long long result = num1 - num2;
           cout << num1 << " - " << num2 << " = " << result << endl; // 3. subtracting
           if (same.count(result) == true) {
               break;
           } else {
               same.insert(result);
               str1 = to_string(result);
           }
        }
        cout << "Chain length " << same.size() + 1 << endl << endl;
    }
    return 0;
}
