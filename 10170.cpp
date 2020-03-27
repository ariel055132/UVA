
#include <iostream>
using namespace std;

/*
1 6
(1) 1
(2) 2 3
(3) 4 5 6
output (3)

3 10
(3) 1 2 3
(4) 4 5 6 7
(6) 8 9 10
*/
int main(){
   long long s; // the initial size of the people
   long long d; // you will have to find the group size staying in the hotel in d day
   while(cin >> s >> d){
      while ((d-s) >= 0)
      {
         d = d - s;
         if (d != 0)
         {
            s++;
         }
      }
      cout << s << endl;
   }
   return 0;
}
