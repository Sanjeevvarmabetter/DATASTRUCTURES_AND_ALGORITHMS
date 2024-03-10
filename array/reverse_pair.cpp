//leetcode hard 493

#include<bits/stdc++.h>

using namespace std;

class Solution {
    public:
    //my brute_force simple approach
    int reverse_pairs(vector<int> &nums) {
        // reverse pairs
        //0<=i<j<nums.length
        // nums[i] > 2 * nums[j]

        // [1,3,2,3,1] 

    int n;
    for(int i=0;i<nums.size();i++) 
        for(int j=i+1;j<nums.size();j++) {
            if(nums[i]> 2* nums[j]) {
                n++;
            }
        }
    return n;    
    }


};

int main() {
    Solution s;
    int n;
    cin >> n;

    vector<int> nums(n);
    for(int i=0;i<n;i++) {
        cin >> nums[i];
    }
    int ans = s.reverse_pairs(nums);
    cout << ans << endl;
    return 0;
} 