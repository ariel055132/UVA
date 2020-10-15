#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <cmath>
using namespace std;

bool isUgly(int num) {
    if (num == 1){
        return true;
    }
    while(num % 2 == 0) {
        num /= 2;
    }
    while(num % 3 == 0) {
        num /= 3;
    }
    while(num % 5 == 0) {
        num /= 5;
    }
    if (num == 1) {
        return true;
    } else {
        return false;
    }
}

int main() {
    time_t start, end;
    time(&start);

    int num_index = 0; // count the ugly number
    int num = 0;
    vector<int> no;
    for (int i = 1; i < 10000000000; i++) {
        if (isUgly(i) == true) {
            /*
            no.push_back(i);
            num_index++;
             */
            num = i;
            num_index++;
        }
        if (num_index == 1500) {
            break;
        }
    }
    //cout << "The 1500'th ugly number is " << no[1499] << endl;
    cout << "The 1500'th ugly number is " << num << endl;
    time(&end);
    double time_taken = (double) (end-start);
    cout << time_taken << endl;
}
