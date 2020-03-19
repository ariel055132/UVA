#include <iostream>
using namespace std;

int main(){
    int i;
    while(cin >> i){
        if (i == 0)
        {
            break;
        }
        else{
            string binary = "";
            int count = 0;
            while(true){
                if (i == 1)
                {
                    binary = "1" + binary ;
                    break;
                }
                int tmp = i % 2;
                binary = to_string(tmp) + binary ; // to_string(): turn int/float... to string
                i /= 2;
            }
            for (int j = 0; j < binary.length(); j++)
            {
                if (binary[j] == '1')
                {
                    count++;
                }   
            }
            cout << "The parity of " << binary << " is " << count << " (mod 2)." << endl;
        }
    }
    return 0;
}