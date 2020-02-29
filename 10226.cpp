#include <iostream>
#include <string>
#include <map>
#include <iomanip> // setprecision()
using namespace std;

int main(){
    int testcase;
    map<string,int> trees;
    map<string,int>::iterator a;
    int total = 0; // total number of trees
    string input; 

    cin >> testcase >> ws; // ws : white space (输入时跳过空格)
    for (int i = 0; i < testcase; i++)
    {
        // Print a blank line between 2 consecutive test cases
        if (i)
        {
            cout << endl;
        }
        // initialization
        trees.clear();
        total = 0;
        while (getline(cin, input) && input.length())
        {
            trees[input]++;
            total++;
        }
        for (a = trees.begin(); a != trees.end(); a++)
        {
            // to 4 decimal places
            cout << a-> first << " " << fixed << setprecision(4)  << (double) a->second / total * 100 << endl;
        }      
    }    
    return 0;
}