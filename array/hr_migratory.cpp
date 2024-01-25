#include<bits/stdc++.h>

using namespace std;


class Solution {
//[1,3,4,3,2,2,1]
    public:
    int migration(vector<int> arr) {

        vector<int> ans;
        for(int i=0;i<arr.size();i++) {
            for(int j = i+1;j<arr.size();j++) {
                if(arr[i] == arr[j]) {
                    ans.push_back(arr[i]);
                }
            }
        }

        //[1,2,3] min

    //for vector min_element
        int mini = ans[0];        
        for(int i = 0;i<ans.size();i++) {
            if(ans[i] < mini)  {
                mini = ans[i];
            }
        }
    return mini;
    }

}