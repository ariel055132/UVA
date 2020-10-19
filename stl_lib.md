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

   

  2. Vector 

     Dynamic array

     1. push_back() : 新增元素至 vector 的尾端，必要時會進行記憶體配置。
     2. pop_back() : 刪除 vector 最尾端的元素。
     3. size() : 取得 vector 目前持有的元素個數。
     4. [i] : 存取索引值(index)為 i 的元素值。
     5. clear() : 清空所有元素。
     6. begin() : 回傳一個 iterator，它指向 vector 第一個元素。
     7. end() : 回傳一個 iterator，它指向 vector 最尾端元素的下一個位置（請注意：它不是最末元素）。

     ```C++
     #include <vector>
     using namespace std;
     
     int main() {
         vector<int> vec;
     	vec.push_back(10); // [10]
         vec.push_back(20); // [10, 20]
         vec.push_back(30); // [10, 20, 30]
         
         int len = vec.size(); // len = 3
         for(int i = 0; i < len; i++) {
             cout << vec[i] << endl;  // output, 10, 20, 30
         }
     }
     ```
     3. Set  集合
        1. insert :  把一個數字放進集合
        2. erase : 把某個數字從集合中移除
        3. count : 檢查某個數是否有在集合中
        4. size:  取得 Set 目前持有的元素個數。
        5. clear : 清空所有元素。
     ```c++
     #include <set>
     using namespace std;
     // UVA 263
     int main() {
         set<int> mySet;
         mySet.insert(20); // mySet = {20}
         mySet.insert(10); // mySet = {10, 20}
         mySet.insert(30); // mySet = {10, 20, 30}
         cout << mySet.count(20) << endl; // exist -> 1
         cout << mySet.count(50) << endl; // not exist -> 0
         /*
         if (mySet.count(20) == true){
         	your code
         }
         */
         mySet.erase(20);  // mySet = {10, 30}
         myset.clear();    // mySet = {}
         return 0;
     }
     ```

3. Algorithms std

   Some useful functions/methods in algorithm library.

   1. sort() : sort data in ascending order, if you need descending order, write a cmp function
   2. reverse() : reverse data

   ```c++
   #include <algorithm> // include pls = =
   // sort string
   using namespace std;
   bool cmp(char a, char b) {
       return a > b;
   }
   
   int main(){
       string str1 = "876352";
       sort(str1.begin(), str1.end()); // sort in ascending order
       cout << str1 << endl; // 235678
       sort(str1.begin(), str1.end(), cmp); // sort in descending order
       cout << str1 << endl; // 876532
   }
   ```

   ```C++
   #include <algorithm> // include this
   #include <vector>
   // sort vector
   using namespace std;
   
   int main(){
       vector<int> num{1, 5, 8, 9, 6, 7, 3, 4, 2, 0};
       sort(num.begin(), num.end()); // ascending order
       for(int i = 0; i < num.size(); i++) {
           cout << num[i] << " ";
       } // 0 1 2 3 4 5 6 7 8 9 
       sort(num.begin(), num.end(), greater<int>()); // descending order
       /*
       reverse(num.begin(), num.end()); // reverse the vector
       */
   }
   
   
   ```

   