#include <iostream>
#include <map>
#include <string>

// Use map to solve uva 10420 - List of Conquests
using namespace std;

int main(){
    int testcase = 0;
    string country;
    string people;

    cin >> testcase;
    map<string,int> record;
    map<string,int>::iterator a;

    for (int i = 0; i < testcase; i++)
    {
        cin >> country;
        record[country]++;
        getline(cin, people);
    }
    
    for (a = record.begin(); a != record.end(); a++)
    {
        cout << a->first << " " << a->second << endl;
    }
    
    return 0;
}