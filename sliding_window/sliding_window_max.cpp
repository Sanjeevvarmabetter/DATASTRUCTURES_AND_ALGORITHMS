//LC-239
// Input: nums = [1,3,-1,-3,5,3,6,7], k = 3
// Output: [3,3,5,5,6,7]
// Explanation: 
// Window position                Max
// ---------------               -----
// [1  3  -1] -3  5  3  6  7       3
//  1 [3  -1  -3] 5  3  6  7       3
//  1  3 [-1  -3  5] 3  6  7       5
//  1  3  -1 [-3  5  3] 6  7       5
//  1  3  -1  -3 [5  3  6] 7       6
//  1  3  -1  -3  5 [3  6  7]      7



//brute force approach

#include<bits/stdc++.h>
using namespace std;

class Solution {
private:
    void getmax(vector<int> nums,int left,int right,vector<int> ans) {

        int maxa = INT_MIN;
        for(int i=left;i<= right;i++) {
            maxa = max(nums[i],maxa);
            ans.push_back(maxa);
        }

}
public:
    vector<int> bruteforce_sliding_window(vector<int> &nums,int k) {
        //i am placing two pointers left and right
        //then the right will get incremented according to the k value
    
        int left = 0,right = 0;
        int i,j;
        vector<int> ans;
                    //the reason i put k-1 because the right starts from 0 index
        while(right < k-1) { //this will increment 
                right++;
        }

        while(right < nums.size()) {
            getmax(nums,left,right,ans);
            right++; //this will move the right value _ _ _r _->r 
            left++; // this will move the left value l_->l _ _  _ 
        }

        return ans;
    }

};


