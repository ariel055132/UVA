#include <iostream>

using namespace std;

long long int no[101][101]; // -2^32 <= numbers <= 2^32

int main(){
    int testcase; // no of test case
    int dim; // dimension of matrix
    char c1, c2;

    cin >> testcase;
    // i = 1 for printing the test no 
    for (int i = 1; i <= testcase; i++)
    {
        //cout << "N = ";
        cin >> c1 >> c2 >> dim;
        // input the matrix
        for (int i = 0; i < dim; i++)
        {
            for (int j = 0; j < dim; j++)
            {
                cin >> no[i][j];
            }       
        }
        // is it a symmetric matrix
        bool symmetric = true;
        // Check the element
        for (int i = 0; i < dim; i++)
        {
            for (int j = 0; j < dim; j++)
            {
                // elements in Symmetric matrix cannot be 0
                if (no[i][j] < 0 || no[i][j] != no[dim-1-i][dim-1-j])
                {
                    symmetric = false;
                    break;
                }               
            }
            if (symmetric == false)
            {
                break;
            }
        }
        cout << "Test #" << i << ": ";
        if (symmetric == true)
        {
            cout << "Symmetric." << endl;
        }
        else{
            cout << "Non-symmetric." << endl;
        }
    }
    return 0;  
}