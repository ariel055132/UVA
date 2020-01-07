#include <iostream>
using namespace std;

int set[20001]; // union
int find(int x){
    if(x != set[x]){
        set[x] = find(set[x]);
    }
    return set[x];
}

int main() {
    int n;
    while(cin >> n && n != EOF){
        // initialize the set array
        for (int i = 0; i < 2*n; i++) {
            set[i] = i;
        }
        int c, a, b; // command, parameters
        while(cin >> c >> a >> b){
            // the last line contains 0 0 0
            if (c == 0 && a == 0 && b == 0){
                break;
            }
            else{
                int a1 = find(a);  // friends
                int a2 = find(a+n); // enemies
                int b1 = find(b); // friends
                int b2 = find(b+n); // enemies
                // command 1: setFriends
                if (c == 1){
                    // contradictions
                    if (a1 == b2){
                        cout << "-1" << endl;
                    } else{
                        set[a1] = b1; // friends
                        set[a2] = b2; // shared the same enemies
                    }
                }
                // command 2: setEnemies
                if (c == 2){
                    // contradictions
                    if (a1 == b1){
                        cout << "-1" << endl;
                    }
                    else{
                        set[a1] = b2;
                        set[a2] = b1;
                    }
                }
                // command 3: areFriends
                if (c == 3){
                    // yes
                    if (a1 == b1){
                        cout << "1" << endl;
                    }
                    // no
                    else{
                        cout << "0" << endl;
                    }
                }
                // command 4: areEnemies
                if (c == 4){
                    // yes
                    if (a1 == b2){
                        cout << "1" << endl;
                    }
                    // no
                    else{
                        cout << "0" << endl;
                    }
                }
            }
        }
    }
    return 0;
}
