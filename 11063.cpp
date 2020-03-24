#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n; // number of elements in the sequence
    int case_no = 1;       // case no for output
    while (cin >> n)
    {
        int no[n] = {0};     // save the integer
        int check[6000] = {0}; // save the sum of adjacent element in no array, array size 6000 to prevent array out of bound error
        int check_index = 0;   // index used in check array
        bool b2_seq = true;    // is it a b2 sequence?
        for (int i = 0; i < n; i++)
        {
            cin >> no[i];
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = i; j < n; j++)
            {
                check[check_index] = no[i] + no[j];
                check_index++;
            }
        }

        // check the first element is valid or not
        if (no[0] < 1)
        {
            b2_seq = false;
        }
        
        // check value in no[i] > no[i-1], if yes, not b2_seq
        for (int i = 1; i < n; i++)
        {
            if (no[i] <= no[i-1])
            {
                b2_seq = false;
                break;
            }       
        }
        
        sort(check, check+check_index);
        for (int l = 1; l < check_index; l++)
        {
            if (check[l] == check[l-1])
            {
                b2_seq = false;
                break;
            }
        }

        if (b2_seq == true)
        {
            cout << "Case #" << case_no << ": It is a B2-Sequence." << endl << endl;
        }
        else
        {
            cout << "Case #" << case_no << ": It is not a B2-Sequence." << endl << endl;
        }
        case_no++;
    }

    return 0;
}