#include<bits/stdc++.h>

using namespace std;

class Solution {
    public:
    int findsalesmatch(int n,vector<int> ar) {
        map<int,int> mp;
        int count = 0;

        for(int i=0;i<n;i++) {
            mp[ar[i]];
        }

        for(auto i:mp) {
            count+= i.second/2;
        }
    return count;
    }

    public:
    int better(int n,vector<int> ar) {
        int visited[n] = {0};
        int pairs = 0;
        for(int i=0;i<n;i++) {

        //      If it has been visited, it means that the pair for this element has already been counted,
        //       so the loop continues to the next iteration without doing anything.
            if(visited[i]) {
                continue;
            }

            for(int j=i+1;j<n;j++) {
                if(ar[i] == ar[j]) {
                    pairs++;
                    visited[j] = 1;
                    break;
                }
            }
        }
        return pairs;
    }

};