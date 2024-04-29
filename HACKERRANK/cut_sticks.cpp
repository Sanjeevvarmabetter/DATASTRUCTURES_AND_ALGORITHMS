#include<bits/stdc++.h>

using namespace std;


class Solution {
    public:
    int cut(vector<int> arr,int k) {
        sort(arr.begin(),arr.end());
    vector<int> counts;

    while(!arr.empty()) {
        int length_of_array = arr.size();

        counts.push_back(length_of_array);
        int s = shortest(arr);
        for(int i=0;i<arr.size();i++) {
            arr[i] = arr[i] - s;
            if(arr[i] <= 0) {
                    arr.erase(arr.begin() + i);
                    i--;
            }
        }

    }
    return counts[k-1];
    }

    int shortest(vector<int> ans) {
        int n = ans.size();
        int min = ans[0];
        for(int i=0;i<n;i++) {
            if(ans[i]< min) {
                min = ans[i];
            }
        }
        return min;
    }
};


int main() {

    vector<int> arr;
    int n;
    cin >> n;
    arr.resize(n);

    for(int i=0;i<n;i++) {
        cin >> arr[i];

    }
    int k;
    cin >> k;

    Solution sol;
    int ans = sol.cut(arr,k);
    cout << ans << endl; 
}