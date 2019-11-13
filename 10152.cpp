#include <iostream>
using namespace std;
string original_stack[201]; // original stack , maximum size is 200, index is i
string target_stack[201]; // target stack, maximum size is 200, index is j

int main() {
    int testcase;
    int index_stack;
    int i, j; // index of original_stack, index of target stack
    cin >> testcase;
    for(int times=0; times < testcase; times++){
        cin >> index_stack;
        cin.ignore(); // must be added, otherwise it will WA...
        for (i = 0; i < index_stack; i++) {
            getline(cin, original_stack[i]);
        }
        for (j = 0; j < index_stack; j++) {
            getline(cin , target_stack[j]);
        }
        for (i = index_stack-1, j = index_stack-1; i >= 0 && j >= 0 ;i--) {
            // elements in the same index are the same
            if(original_stack[i] == target_stack[j]){
                j--;
            }
            // elements in the same index are different
            else if(original_stack[i] != target_stack[j]){
                continue;
            }
        }
        for (; j >= 0 ; j--) {
            cout << target_stack[j] << endl;
        }
        cout << endl;
    }
    return 0;
}