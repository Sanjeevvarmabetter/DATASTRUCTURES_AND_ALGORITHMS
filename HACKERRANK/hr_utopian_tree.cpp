#include<bits/stdc++.h>

using namespace std;

class Solution {
    public:
    int utopianTree(int n) {
    //each spring doubles height
    //each summer height increases by 1m
    //  1m is planted on set of spring
    // after n 
    //we can say that odd doubles

    //even only increase by one

    // code this 

    int count = 1;
    for(int i=0;i<n;i++) {
        //if odd 
        if(i%2) {
            count++;
        }
        else {
            count = count * 2;
        }
}
    return count;


};
