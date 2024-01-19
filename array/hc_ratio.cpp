

// https://www.hackerrank.com/challenges/plus-minus/problem?isFullScreen=true


#include<bits/stdc++.h>

using namespace std;


void plusMinus(vector<int> arr) {
    int countpositive = 0;
    int countnegative = 0;
    int countzero = 0;

    for(int i=0;i<arr.size();i++) {
        if(arr[i]>0) {
            countpositive++;
        }
        else if (arr[i]<0) {
            countnegative++;
        }
        else {
            countzero++;
        }
    }
    int n = arr.size();

    float a,b,c;
    
    cout << a/float(n) << endl;
    cout << b/float(n) << endl;
    cout << c/float(n) << endl;
}


