#include<bits/stdc++.h>

using namespace std;

class Solution
{
    
    private:
    void dfs(int node,int visited[],stack<int> s,vector<int> adj[]) {
        visited[node] = 1;
        for(auto i : adj[node]) {
            if(!visited[i]) {
                dfs(i,visited,s,adj);
            }
        }
        s.push(node);
    }
	public:
	vector<int> topoSort(int V, vector<int> adj[]) 
	{

	    
	    int visited[V] = {0};
	    stack<int> s;
	    
	    for(int i=0;i<V;i++) {
	        if(!visited[i]) {
	            dfs(i,visited,s,adj);
	        }
	    }
	    
	    
	    vector<int> ans;
	    while(!s.empty()) {
	        ans.push_back(s.top());
	        s.pop();
	    }
	    return ans;
	}
};
