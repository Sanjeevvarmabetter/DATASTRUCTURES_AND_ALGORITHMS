#include<bits/stdc++.h>

using namespace std;

vector<int> compare_triplets(vector<int> a,vector<int>b) {
    int acounter = 0;
    int bcounter = 0;

    for(int i = 0; i<= a.size() && b.size();i++) {
        if(a[i] > b[i]) {
            acounter = acounter + 1;

        }
        else if(b[i] > a[i]) {
            bcounter = bcounter + 1;
        }
     } 


     //for storing  the ans
        vector<int> ans;

        ans.push_back(acounter);
        ans.push_back(bcounter);

        return ans;
}