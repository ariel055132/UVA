#include <iostream>
using namespace std;

/* if a and b are friends, b and c are friends --> a and c are friends
 * The friends of my friends are my friends as well.
 * if a and b are enemies, b and c are enemies --> a and c are friends
 * A common enemy (b) makes two people (a & c) friends
 * if a and b are enemies, b and c are friends --> b and c are friends
 * An enemy (a) of a friend (b & c) is an enemy.
 uva 10158
 */

// find the union
// max no_ppl is 10000, relationship between each other should *2 (20000), +1 to prevent out of bound
// that why I use 20001
int set[20001];

// find the set to determine whether the opeartion is valid / invalid
int find(int x){
    if (x != set[x]){
        set[x] = find(set[x]);
    }
    return set[x];
}

int main() {
    int n,c,x,y;
    while ( scanf("%d",&n) != EOF ) {
        for ( int i = 0 ; i < 2*n ; ++ i )
            set[i] = i;
        while ( scanf("%d%d%d",&c,&x,&y) && c ) {
            int a1 = find( x ),a2 = find( x+n );
            int b1 = find( y ),b2 = find( y+n );
            switch( c ) {
                case 1: if ( a1 == b2 ) printf("-1\n");
                    else {
                        set[a1] = b1;
                        set[a2] = b2;
                    }break;
                case 2: if ( a1 == b1 ) printf("-1\n");
                    else {
                        set[a1] = b2;
                        set[a2] = b1;
                    }break;
                case 3: if ( a1 == b1 ) printf("1\n");
                    else printf("0\n");
                    break;
                case 4: if ( a1 == b2 ) printf("1\n");
                    else printf("0\n");
                    break;
            }
        }
    }


    return 0;
}
