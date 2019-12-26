#include <iostream>
#include <algorithm>
using namespace std;
/*
shoemaker's problem
直接將罰金除以天數 ，然後排序，高的先做即可。
Let a and b are two different jobs
Da, Db are the days needed for finishing the job
Fa, Fb are the fine
X is the number of previous working days
do a first: X*Fa + (Da+X)*Fb --> X*Fa + Da*Fb + X*Fb
do b first: X*Fb + (Db+X)*Fa --> X*Fb + Db*Fa + X*Fa
Divide X*Fa and X*Fb --> obtain Da*Fb (do a first) and Db*Fa (do b first)
Da*Fb < Db*Fa --> do a first
Da*Fb > Db*Fa --> do b first
Da*Fb = Db*Fa --> check the no of a,b , smaller no do first
*/

typedef struct {
    int time;
    int fine;
    int num; // no of the job
}work;

// (double) explicit type conversion to double
bool compare(work a, work b){
    // cp of a > cp of b --> do a first, no need to change the order of shoemaker
    if ((double)a.fine/(double)a.time > (double)b.fine/(double)b.time){
        return true;
    }
    // cp of a < cp of b --> do b first, need to change of the order of shoemaker
    else if((double)b.fine/(double)b.time > (double)a.fine/(double)a.time ){
        return false;
    }
    // cp of a == cp of b --> check the no of a and b, smaller no do first
    else if((double)a.fine/(double)a.time == (double)b.fine/(double)b.time){
        // num correct
        if(a.num < b.num){
            return true;
        }
        // num wrong
        else if (b.num < a.num){
            return false;
        }
    }

}
int main() {
    int testcase; // the number of the case following
    int jobs_no; // number of jobs
    work shoemaker[1005]; // maximum jobs is 1000
    cin >> testcase;
    for (int times = 0; times < testcase; times++) {
        // the outputs of two consecutive cases will be separated by a blank line.
        if (times > 0){
            cout << endl;
        }
        cin >> jobs_no;
        for (int i = 0; i < jobs_no; i++) {
            cin >> shoemaker[i].time >> shoemaker[i].fine;
            shoemaker[i].num = i+1;
        }
        sort(shoemaker, shoemaker + jobs_no, compare);
        for (int j = 0; j < jobs_no; j++) {
            if (j > 0){
                cout << " ";
            }
            cout << shoemaker[j].num;
        }
        cout << endl;
    }
    return 0;
}
