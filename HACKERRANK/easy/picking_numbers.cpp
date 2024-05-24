//we need to find the longest subarray 

#include<bits/stdc++.h>

using namespace std;


class Solution {
    public:
    int picking_numbers(vector<int>arr) {
        int n = arr.size();
        int counter = 1;
        int max = 0;

        sorting(arr);

        for(int i=0;i<n;i++) {
            for(int j=i+1;j<n;j++) {
                int temp = abs(arr[i] - arr[j]);
                if(temp<=1) {
                    counter++;
                }
                if(max < counter) {
                    max = counter;
                }
            } 
            counter = 1;
        }   
        return max;
        }

        void sorting(vector<int> arr) {
            int n = arr.size();
            for(int i=0;i<n;i++) {
                for(int j = i+1;j<n;j++) {
                    if(arr[i]>arr[j]) {
                    int temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
                }
            }
        }

};
int main() {

    int n;
    cin >> n;

    vector<int> arr;
    arr.resize(n);

    for(int i=0;i<n;i++) {
        cin >> arr[i];
    }

    Solution sol;
    int ans = sol.picking_numbers(arr);

    cout << ans << endl;

    return 0;



}
