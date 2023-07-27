#include<bits/stdc++.h>
using namespace std;

// we need to call dfs starting from 3 different provinces


class Solution{
    private:
    void dfs(int node,vector<vector<int>> &adjlist,int vis) 
    {
        vis[node] = 1;
        for(auto it:adjlist[node]) {
            if(!vis[it]) {
                dfs(it,adjlist,vis);
            }
        }
    }
    public:
    int problem(vector<vector<int>> adj,int n) {
        vector<int> adjlist[n];
        for(int i=0;i<n;i++) {
            for(int j=0;j<n;j++) {
                if(adj[i][j] == 1 && i!=j) {
                    adjlist[i].push_back(j);
                    adjlist[j].push_back(i);
                }
            }
        }
        int vis[n] = {0};
        int count = 0;
        for(int i=0;i<n;i++) {
            if(!vis[i]) {
                count ++;
                dfs(i,adjlist,vis);
            }
        }
    }
}
