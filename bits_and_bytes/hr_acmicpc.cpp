#include<bits/stdc++.h>

using namespace std;


class Solution {
    public:

    vector<int> acm(vector<int> topic) {
        int n = topic.size();
        
        //for permutations
        int maxi = 0,count = 0;
        for(int i=0;i<n;i++) {
            bitset<500> a = bitset<int>topic[i];

            //with another element
            for(int j=i+1;j<n;j++) {
                bitset<500> b = bitset<500>topic[i];

            bitset<500> c = a | b 

            //we need to count the number of 1's

            int ct = c.count();

            //maxi = 0 < 2 < 3 < 5
        if(ct > maxi) {
            maxi = ct;
            count = 1;
        }
        else if(ct == maxi) {
            //how many times the ct == maxi 
            //then we can get the total number if teams that have max skills 
            count++;
        }
    
      }
        }

    } 
    //we need to return {maximum topics and the no of teammates}
    return {maxi,cout};
};