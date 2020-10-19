## C++ Standard Library chapter 6 -- STD ##

1. What you learn ?
   
   - The concept of STL
   - The programming techniques needed to use it
   
2. STD Components

   - Containers : manage collections of objects of a certain kind.
   - Iterators : step through the elements of collections of objects, offer a small but common internal structure of the collection. ++ for increment, * for access the value of an iterator
   - Algorithms : process the elements of collections

3. Containers

   Manage a collection of elements

   1. Sequence containers : ordered collections in which every element has a certain position. The positions depends on the time and place of the insertion.

      Arrays and linked lists

      - array
      - vector
      - deque
      - list
      - forward_list

   2. Associative containers : sorted collections in which the position of an element depends on its value.

      Binary Trees

      - set
      - multiset
      - map
      - multimap

   3. Unordered (associative) containers : unordered collections in which position of the elements does not matter. Only important question is whether a specific element is in the collection.

      Hash Tables

      - unordered_multiset
      - unordered_map
      - unordered_multimap



4. Sequence Containers

   - Arrays
   - Vectors

   - Deques

   - Lists (singly and doubly linked)

     

   Vectors : Manage its elements in a dynamic array, enables random access.

   ```c++
   #include <vector>
   #include <iostream>
   // defines a vector for integer values, insert 6 elements and prints the elements of the vector
   
   using namespace std;
   
   int main(){
       vector<int> num; // vector container for integer elements
       // append elements with values 1 to 6
       // push_back() function appends an element to a container
       for(int i = 1; i <= 6; i++) {
           num.push_back(i);
       }
       // print all elements followed by a space 
       // size() function returns the number of elements of a container.
       for(int i = 0; i < num.size(); i++) {
           cout << num[i] << " "; 
       } // 1 2 3 4 5 6
       cout << endl;
   }
   ```

​		Deques