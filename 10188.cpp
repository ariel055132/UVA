#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int n, m, cases = 1;
    while(cin >> n) 
    {
        vector<string> standard_ans, team_ans;
        string tmp;
        if(n == 0)
        {
            break;
        }
        cin.ignore();
        for (int i = 0; i < n; i++)
        {
            getline(cin, tmp);
            standard_ans.push_back(tmp);
        }

        cin >> m;
        cin.ignore();
        for (int i = 0; i < m; i++)
        {
            getline(cin, tmp);
            team_ans.push_back(tmp);
        }

        cout << "Run #" << cases << ": ";
        if (standard_ans == team_ans)
        {   
            cout << "Accepted" << endl;       
        }
        else 
        {
            string standard_num, team_num;
            for (int i = 0; i < standard_ans.size(); i++)
            {
                for (int j = 0; j < standard_ans[i].length(); j++)
                {
                    if (standard_ans[i].at(j) >= '0' && standard_ans[i].at(j) <= '9') 
                    {
                        standard_num += standard_ans[i].at(j);
                    }
                }
                
            }
            
            for (int i = 0; i < team_ans.size(); i++)
            {
                for (int j = 0; j < team_ans[i].length(); j++)
                {
                    if (team_ans[i].at(j) >= '0' && team_ans[i].at(j) <= '9') 
                    {
                        team_num += team_ans[i].at(j);
                    }
                }
                
            }

            

            if (team_num == standard_num)
            {
                cout << "Presentation Error" << endl;
            } 
            else 
            {
                cout << "Wrong Answer" << endl;
            }
            
        }
        
        cases++;
    }
    return 0;
}