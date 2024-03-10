//leetcode hard 493

#include<bits/stdc++.h>

using namespace std;

class Solution {
    public:
    //my brute_force simple approach
    int brute_reverse_pairs(vector<int> &nums) {
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
    public:
    
    int optimal_reverse_pairs(vector<int> &nums) {
        // //we need to perform a merge sort
        // [1,2,3,2,1]
        // |          |
        // [1,2]    [3,2,1]
        // |               |
        // [1][2]       [3][2][1]   
        // |               |
        // [1,2]       [1,2,3]
        //     ->[1,1,2,2,3]

    count = count + (right -(mid + 1)) -> this will give you no of elements before the num, as the elements are smaller than num
    
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
    int ans = s.brute_reverse_pairs(nums);
    cout << ans << endl;
    return 0;
} 