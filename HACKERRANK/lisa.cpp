// if the problem number and page number is same then special++

#include<bits/stdc++.h>

using namespace std;

class Solution {
    public:
    int workbook(int n,int k,vector<int>arr) {
        int special = 0;
        // int current_page;
        int page = 0;
        for(int i=0;i<n;i++) {
                int total_problems =  arr[i];
                    int count  = 0;
                for(int i=0;i<total_problems;i++) {
                        count++;
                    if(count>k) {
                        count = 1;
                        page++;
                        if(i==page) {
                            special++;
                        }
                    }
                }
                page++;
        }
        return special;
    }


    int correct_workbook(int n,int k,vector<int> arr) {
            int page = 1;
            int special = 0; //counter

            for(int i =0;i<n;i++) {
                int total = arr[i];
                int count = 0;
                for(int j=1;j<=total;j++) {
                    count++;
                    if(count>k) {
                        page++; //2
                        count=1;
                    }
                if(j==page) {
                    special++;
                }
                
            }
            page++; //for next chapter
            }
            return special;

    }
};


int main() {
    int n;
    cin >> n;
    int k;
    cin >>k;
    vector<int> arr;
    arr.resize(n);

    for(int i=0;i<n;i++) {
        cin >> arr[i];
    }

    Solution  sol;
    int ans = sol.correct_workbook(n,k,arr);

    cout << ans << endl;
    return 0;

}
