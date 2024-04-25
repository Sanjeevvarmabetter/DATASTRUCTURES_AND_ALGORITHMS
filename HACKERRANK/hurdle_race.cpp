#include<bits/stdc++.h>

using namespace std;


class Solution {
    public:
    int hudlerace(int k,vector<int>n) {
        //in this problem it is only taking max height

        // int maxi = *max_element(n.begin(),n.end());


        int maxi = INT_MIN;

        for(int i=0;i<n.size();i++) {
            if(n[i] > maxi) {
                maxi = n[i];
            }
        }

        if(k < maxi) {
            return abs(k-maxi);
        }
        else  {
            return 0;
        }


    }

};



    int main() {
        int k,size;
        vector<int>n;

        cin >> size;
        cin >> k;
        for(int i=0;i<size;i++) {
            int val;
            cin >> val;
            n.push_back(val);
        }
    Solution solution;
    int hurdle = solution.hudlerace(k,n);
    cout << hurdle << endl;
    return 0;

    }
