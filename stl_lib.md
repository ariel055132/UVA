# C++ useful std library

1. Stringstream

    專門拿來讀取字串並且處理，很多時候拿來做字串的切割，或者是int跟string類別之間的轉換
   
    
    
    **int**型態的數字轉成**string**
    
    Prefer using to_string()  instead
    
    此時的**stringstream**就像個橋樑，可以負責當中間轉換的部分。
    
    **stringstream**提供了**>>**與**<<**運算子來讀取或寫入:
    
    **>>**代表寫入**stringstream**中 (~cin)，**<<**代表從**stringstream**拿出。(~cout)
    
    ```	c++
    #include <sstream>
    // int to string
    // to_string(): 轉換int，長整數，無號數，浮點數為字串
    using namespace std;
    int main(){
        stringstream s1;
        int number = 1234; 
        string output; 
        cout << "Number = " << number << endl; // type: int
        s1 << number;
        s1 >> output;
        cout << "Output = " << output << endl; // type: string
}
    ```
    ### to_string() implementation 
    
    ```	c++
    // to_string(int/long/double/... val)
    #include <string> 
    
    using namespace std;
    int main(){
        string str1 = to_string(12.10);
        string str2 = to_string(99);
        cout << str1 << endl; // 12.100000
        cout << str2 << endl; // 99
    }
    ```

     相反的**stringstream**也可以將**string轉成int**
    
     prefer using stoi() instead
    
    ```C++
    #include <sstream>
    using namespace std;
    
    int main(){
    	stringstream str_to_int;
        string s1 = "12345";
    	int n1;
        str_to_int << s1;
        // str_to_int.str(s1);
        // s1 = str_to_int.str();
        str_to_int >> n1;
        cout << "s1" << s1 << endl; // s1 = 12345
        cout << "n1" << n1 << endl; // n1 = 12345
        return 0;
    }
    ```
    ### stoi() implementation
    
    ```C++
    #include <cstring> // stoi
    using namespace std;
    
    int main(){
        string num = "123";
        int no = stoi(num);
        cout << no << endl; // 123
        return 0;
    }
    ```

   

​	  