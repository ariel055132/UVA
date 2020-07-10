#include <iostream>
#include <string>
#include <cstring>

using namespace std;
int field[102][102];

int main(){
    int case_no = 1;
    int n, m; // n --> row, m --> column
    string data;
    while (cin >> n >> m)
    {
        // terminate input when n = m = 0
        if (n == 0 && m == 0)
        {
            break;
        }
        else{            
            // init array
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < m; j++)
                {
                    field[i][j] = 0;
                }
            }

            // input the data and calculate the no of mines
            for (int i = 0; i < n; i++)
            {
                cin >> data;
                for (int j = 0; j < data.length(); j++)
                {
                    if (data[j] == '*')
                    {
                        field[i][j] = -100; // mine
                        field[i][j+1]++; // top
                        field[i+1][j+1]++; // top-right
                        field[i+1][j]++; // right
                        field[i+1][j-1]++; // down-right
                        field[i][j-1]++; // down
                        field[i-1][j-1]++; // down-left
                        field[i-1][j]++; //left
                        field[i-1][j+1]++; // top-left
                    }        
                }        
            }
            
            // There must be an empty line between field outputs
            if (case_no > 1)
            {
                cout << endl;
            }

            cout << "Field #" << case_no << ":" << endl;
            case_no++;
            // output the array
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < m; j++)
                {
                    if (field[i][j] < 0)
                    {
                        cout << '*';
                    }
                    else{
                        cout << field[i][j];
                    }
                }
                cout << endl;
            }
        }
    }
    return 0;
}

