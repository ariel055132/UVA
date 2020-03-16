#include <iostream>
#include <cstring> // stoi

using namespace std;

// decimal to binary
int dec2bin(int no);
// hexadecimal to binary
int hex2bin(string num);

int main()
{
    int testcase;
    cin >> testcase;
    for (int i = 0; i < testcase; i++)
    {
        string num;
        cin >> num;
        int no = stoi(num);
        int b1 = dec2bin(no);
        int b2 = hex2bin(num);
        cout << b1 << " " << b2 << endl;
    }

    return 0;
}

// decimal to binary
int dec2bin(int no){
    int count = 0;
    while(no > 0){
        if (no %2 == 1)
        {
            count++;
        }
        no /= 2;
    }
    return count;
}

// hexadecimal to binary
int hex2bin(string num){
    int count = 0;
    string convert;
    for (int i = 0; i < num.length(); i++)
    {
        if (num[i] == '0')
        {
            convert += "0000";
        }
        else if (num[i] == '1')
        {
            convert += "0001";
        }
        else if (num[i] == '2')
        {
            convert += "0010";
        }
        else if (num[i] == '3')
        {
            convert += "0011";
        }
        else if (num[i] == '4')
        {
            convert += "0100";
        }
        else if (num[i] == '5')
        {
            convert += "0101";
        }
        else if (num[i] == '6')
        {
            convert += "0110";
        }
        else if (num[i] == '7')
        {
            convert += "0111";
        }
        else if (num[i] == '8')
        {
            convert += "1000";
        }
        else if (num[i] == '9')
        {
            convert += "1001";
        }
        else if (num[i] == 'A' || num[i] == 'a')
        {
            convert += "1010";
        }
        else if (num[i] == 'B' || num[i] == 'b')
        {
            convert += "1011";
        }
        else if (num[i] == 'C' || num[i] == 'c')
        {
            convert += "1100";
        }
        else if (num[i] == 'D' || num[i] == 'd')
        {
            convert += "1101";
        }
        else if (num[i] == 'E' || num[i] == 'e')
        {
            convert += "1110";
        }
        else if (num[i] == 'F' || num[i] == 'f'){
            convert += "1111";
        }
    }
    //int len = convert.length();
    for (int j = 0; j < convert.length(); j++)
    {
        if (convert[j] == '1')
        {
            count++;
        }   
    }
    
    return count;
}