#include<bits/stdc++.h>

using namespace std;



class Solution {
    public:
        int flatlandspace(int n,vector<int> arr) {
            int len = arr.size();

            // let us sort the array

            sort(arr.begin(),arr.end());

            int  maxi_distance = 0;

            // maxi_distance = max(maxi_distance,arr[0]-0);
            // maxi_distance = max(maxi_distance,arr[len-1] - len);


            for(int i=0;i<len;i++) {
                maxi_distance = max(maxi_distance,arr[i]- arr[i]);
            }


            for(int i=1;i<len;i++) {
                int distance = (arr[i] - arr[i-1]) /2;

                maxi_distance = max(maxi_distance,distance);
                    

                } 
        return maxi_distance;
        }

        int brute_force(int n,vector<int> arr) {
            int len = arr.size();
            sort(arr.begin(),arr.end());

            int max_distance = 0;

            for(int i=0;i<n;i++) {
                int local_max = abs(arr[0]- i);

                if(local_max !=0) {
                    for(int j=1;j<len;j++) {
                        int distance = abs(i-arr[j]);
                        if(distance < local_max) {
                            local_max = distance;
                        }
                    }

                    if(local_max>max_distance) {
                        max_distance = local_max;
                    }
                }
            }
            return max_distance;


        }
};


int main() {
    int n;
    vector<int>arr;
    cin >> n;
    int m;
    cin >> m;
    arr.resize(m);

    for(int i=0;i<m;i++) {
        cin >> arr[i];
    }

    Solution sol;
    // int ans  = sol.flatlandspace(n,arr);

    int ans = sol.brute_force(n,arr);

    cout << ans << endl;
    return 0;

}