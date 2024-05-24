#include<bits/stdc++.h>

using namespace std;

vector<int> grading_students(vector<int>grades) {
    //only is the difference is less than 3 we need to round int
    //if the total is less than 40 rounds wont work
    //need to check multiples of 5 
    vector<int> ans;
    for(int i=0;i<grades.size();i++) {
        if (grades[i] < 38) {
            ans[i] = grades[i];
        }
        int calc  = grades[i] % 5;
        calc = 5 - calc;
        if(calc < 3) {
            ans[i] = ans[i] + calc;
        }
        else {
            ans[i] = grades[i];
        }
    }
    return ans[i]
}