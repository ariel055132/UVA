#include <iostream>
#include <regex>
#include <string>
using namespace std;
// 11541 Encoding with regular expression

int main() {
    int testcase;
    regex pattern("([A-Z])([0-9]*)");
    cin >> testcase;
    for (int time = 1; time <= testcase ; time++) {
        string code;
        cin >> code;
        cout << "Case " << time << ": ";
        smatch output;
        while(regex_search(code, output, pattern)){
            int times = stoi(output[2]);
            for (int i = 0; i < times; i++) {
                cout << output[1];
            }
            code = output.suffix().str();
        }
        cout << endl;
    }
    return 0;
}
