#include <iostream>
#include <string>
#include <cstring>
#include <sstream>

using namespace std;

int dec2hex(string num){
	int result;
	result = stoi(num);
	return result;
}

int main(){
	string num;
	while(cin >> num){
		if(num[0]=='-'){
			break;
		}
		else if(num[0]=='0'&&num[1]=='x'){
			int d;
			stringstream ss;
			string num1;
			for(int i=2;i<num.length();i++){
				num1 += num[i];
			}
			ss << num1;
			ss >> hex >> d;
			cout << dec << d << endl;
		}else{
			// uppercase to force 44: 0x2c --> 0x2C
			cout << "0x" << hex << uppercase << dec2hex(num) << endl;
		}
	}
	return 0;
}
