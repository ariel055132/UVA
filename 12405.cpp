#include <iostream>

using namespace std;

int main(){
    int testcase; // number of case
    int land_len;
    string land;
    int cnt;
    cin >> testcase;
    for(int case_num = 1; case_num <= testcase; case_num++){
        cin >> land_len;
	cin >> land;
	cnt = 0;
	for(int i = 0; i < land_len; i++){
	   if (land[i] == '.'){
	   	cnt++;
		i += 2;
	   }
	}
	cout << "Case " << case_num << ": " << cnt << endl;
    } 
   
}
