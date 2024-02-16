// code this 

#include<bits/stdc++.h>

using namespace std;


class Solution {
    public:
    int designpdfviewer(vector<int> h,string word) {
        //we need biggest number * number of elements for the word
        //just by finding the biggest number we can do this
        string all_alphabits = "abcdefghijklmnopqrstuvwxyz";
        map<char,int> mp;

        for(int i=0;i<h.size();i++) {
            mp[all_alphabits[i]] = h[i];
        }
        
        //now we need to read the word

        

    }
};

