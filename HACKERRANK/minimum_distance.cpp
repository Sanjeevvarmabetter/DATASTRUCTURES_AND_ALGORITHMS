
// a = [3,2,1,2,3]


// the matching indices are 3,3 and 2,2

// for 3 the indexes are 0,4 = j-i = 4 
// for 2 the indexes are 1,3 = j-i = 2

// the ans = 2 (min)


#include<bits/stdc++.h>

using namespace std;

class Solution {
    public:
    int minimumDistance(vector<int> arr) {
        int n = arr.size();
        int similar = similar_elements(arr);
        int minimum_distance = INT_MIN;
        for(int i =0;i<n;i++) {
            if(arr[i] == similar);
            for(int j = i+1;j<n;j++) {
                if(arr[j] == similar) {
                        minimum_distance = min(minimum_distance,j-i);
                }
            }
            
        }
                    return minimum_distance;

    }

    int similar_elements(vector<int> arr) {
        int sim = 0;
        for(int i=0;i<arr.size();i++) {
                for(int j=0;j<arr.size();j++) {
                    if(arr[i] == arr[j]) {
                        sim = arr[i]; //this will retrive the similar element

                    }
                }
        }
                        return sim;

    }
}; 

int main() {
        int n;
    cin >> n;
    vector<int> arr;

    arr.resize(n);
    for(int i=0;i<n;i++) 
    {
        cin >> arr[i];
    }

    Solution sol;
    int ans = sol.minimumDistance(arr);
    cout << ans << endl;
    return 0;
}