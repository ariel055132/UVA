#include <iostream>
#include <cstring>

using namespace std;

int visit[10000001];
int prime[700001];

int main()
{
    // get the prime number
    memset(visit, 0, sizeof(visit));
    int count = 0;
    visit[0] = visit[1] = 1;
    for (int i = 2; i < 10000000; i++) {
        if(!visit[i]){
            for (int j = i << 1; j < 10000000; j += i) {
                visit[j] = 1;
            }
            prime[count++] = i;
        }
    }

    int n;
    while(cin >> n){
        if (n < 8){
            cout << "Impossible." << endl;
            continue;
        }
        // odd number and input > 8
        // output 2,3 and use prime number chart to find two prime number to print the result
        if (n %2 != 0){
            for (int i = 0; i < count; i++) {
                if (!visit[n-5-prime[i]]){
                    cout << "2 3 " << prime[i] << " " << n-5-prime[i] << endl;
                    break;
                }
            }
        }
        // even number and input > 8
        // output 2 2 and do the same thing in the above
        else {
            for (int i = 0; i < count; i++) {
                if (!visit[n-4-prime[i]]){
                    cout << "2 2 " << prime[i] << " " << n-4-prime[i] << endl;
                    break;
                }
            }
        }
    }
}
