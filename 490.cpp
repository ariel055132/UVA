#include <iostream>
#include <string>
using namespace std;

int main(){
    string sentence[1000];
    int i;
    int maximum = 0;
    for (i = 0; i >= 0; i++)
    {
        getline(cin, sentence[i]);
        if (sentence[i].size()> maximum)
        {
            maximum = sentence[i].size();
        }       
        if (sentence[i]=="")
        {
            break;
        }      
    }
    
    for (int j = 0; j < maximum; j++)
    {
        for (int k = i-1; k >= 0; k--)
        {
            j<sentence[k].size() ? cout<<sentence[k][j] : cout<<" ";
        }
        cout << endl;
    }
    
    return 0;
}