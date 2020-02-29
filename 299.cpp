#include <iostream>

using namespace std;

int main(){
    int testcase; 
    int no_int; // no of integer
    int no[55]; // save the integer 
    int swap_times; // store the swapping times

    cin >> testcase;
    for (int i = 0; i < testcase; i++)
    {
        cin >> no_int;
        for (int j = 0; j < no_int; j++)
        {
            cin >> no[j];
        }
        swap_times = 0; // initialization
        // bubble sort
        for (int x = 0; x < no_int-1; x++)
        {
            for (int y = 0; y < no_int-1; y++)
            {
                if (no[y] > no[y+1])
                {
                    swap(no[y+1],no[y]);
                    swap_times++;
                }               
            }            
        }
        cout << "Optimal train swapping takes " << swap_times << " " << "swaps." << endl;
    }
    return 0;
}