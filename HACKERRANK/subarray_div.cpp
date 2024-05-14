#include<bits/stdc++.h>

using namespace std;

class Solution {
    public:
    int subarray_division(int n,vector<int> arr,int m,int d) {

        int counter = 0; //6-2
        for(int i=0;i<=n-m;i++) {
            int sum = 0;
            for(int j=i;j<m;j++) {
                sum = sum + arr[j];

            }

            if(sum == d) {
                counter++;
            }
        }
    return counter;
    }   
};


int main() {
    int n,m,d;
    cin >> n >> m >>d;

    vector<int> ans;

    ans.resize(n);

    for(int i=0;i<n;i++) {
        cin >> ans[i];
    }

    Solution sol;

    int answer = sol.subarray_division(n,ans,m,d);

    cout << answer << endl;
    return 0;
}
