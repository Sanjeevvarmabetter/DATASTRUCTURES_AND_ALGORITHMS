#include<bits/stdc++.h>

using namespace std;


class Solution {
public:
int size_brute_force(vector<int> arr) {
    int ans = 0;
    for(int i=0;i<arr.size();i++) {
        ans  = ans + arr[i];
    }
    return ans;
}

public:
int size_recursion(vector<int> &arr,int n) {
    
    if(n==0) {
        return 0;
    }
    else {
        return arr[0] + size_recursion(arr + 1, n - 1);
    }
}

};