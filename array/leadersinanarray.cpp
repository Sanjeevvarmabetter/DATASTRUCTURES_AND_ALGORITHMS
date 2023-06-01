//in this problem we need to code leaders in an array
//we are given an un sorted array 
//example : [3,4,2,3,5,2] -> [5,2]  
//example : [19,2,14,3,6,8] -> [19,14,8]

//we can solve the problem in brute force method o(n^2)

//so brute force sol is not a best approach
//insted we eill traverse from right to left
//we will declare the right most element as max
//max = rightmostelement
//after declaring the right most element into max
//we need to travese to the left 
//if any element is greater than max we are going to print and update the max
//the time complex is o(n)

#include<bits/stdc++.h>
using namespace std;

void  leader(int arr[],int n) {
    vector<int> ans;
    int max = INT_MIN;
    for(int i = n-1;i>0;i--) {
        //now we are at the right most part of the array
        if(i==n-1) {
            //we are pushing the rightmost part of the array in to vector
            ans.push_back(arr[i]);
            max = arr[i];
        }
        else {
            if(arr[i]>=max) {
                ans.push_back(arr[i]);
                max = arr[i];
            }
        }
    }
    //at last we need to reverse the vector 
    reverse(ans.begin(),ans.end());

}

int main() {
    int arr[] = {2,4,566,5,3,22,3445,3,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    leader(arr,n);
    for(auto i:arr) {
        cout << arr[i] << endl;
    }
    return 0;

}