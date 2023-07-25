//in this implementation we are using recursion
//the dfs function vists node and push back to the vector
//but we need to make sure that already exsisting element should be avoided

#include<bits/stdc++.h>
using namespace std;

class Solution{
	private:
	void dfs(int node,vector<int> &ls,int vis[],vector<int>adj[]) {
		vis[node] = 1; //we are stating with 1
		ls.push_back(node);//we successfully pushed the node into the vector
		//now we need to implement travesal logic

		for(auto it : adj[node]) {
			if(!vis[node]) {
				dfs(it,ls,vis,adj);
			}
		}
	}
	
	public:
	vector<int>dfs_of_graph(int n,vector<int>adj[]) {
	//i need t o create a visited list and put 0's

	int vis[n] = {0};
	//i need to init the start
	int start = 0;
	vector<int> list;
	//call recusion
	dfs(start,list,vis,adj);

	return list;
		




	}
};
