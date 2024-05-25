/*

find the minium number between the sub array


*/

#include<bits/stdc++.h>

using namespace std;

class Solution {
    public:
    vector<int> service_lane(vector<int>width,int n,vector<vector<int>> arr) {
        int n = arr.size();
        int low,high; // wrong solution
        
        int mini = INT_MIN;
        vector<int> ans;
        for(int i=0;i<n;i++) {
            for(int j=0;j<n;j++) {
                 low = arr[i][j];
                 high = arr[i][j+1];
            
                for(i=low;i<=high;i++) {
                    mini = min(mini,i);

                }    

                ans.push_back(mini);
            }


        }

    }

    vector<int> correct_sol(vector<int>width,int n,vector<vector<int>> arr) {
        int n = arr.size();
        int low,high;
        int mini = INT_MIN;
        vector<int> ans;

        for(int i=0;i<n;i++) {
            low = arr[i][0];
            high = arr[i][1];

            for(int k=low;k<=high;k++) {
                mini = min(mini,width[k]);
                ans.push_back(mini);
            }
        }
        return ans;
    }
};


