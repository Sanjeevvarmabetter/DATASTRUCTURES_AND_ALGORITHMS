#include<bits/stdc++.h>

using namespace std;
class Solution {
	private:

	vector<int> bfstraversal(vector<int>adj[],int n) {

		int vis[n] = {0}; //initially we have an array of size n which contains 0
		vis[0] = 1;
		queue<int> q;
		q.push(0);
		vector<int> bfs;

		while(!q.empty()) {
			int node = q.front();
			q.pop();
			bfs.push_back(node);


			for(auto p : adj[node]) {

				if(!vis[p]) {
					vis[p] = 1;
					q.push(p);
				}
			}
		}
		return bfs;

	}
};

//function for adding edges (list version)
void addedge(vector<int> adj[],int u,int v) {
	adj[u].push_back(v);
	adj[v].push_back(u);
	
}

//function for printing answer

void printans(vector<int>ans) {

	for(int i=0;i<ans.size();i++) {
		cout << ans[i] << " ";
}
}

int main() {
	vector<int> adj[6];
	//now we can use our addedge function

	addedge(adj,0,1);
	addedge(adj,1,2);
	addedge(adj,2,3);
	addedge(adj,3,4);


	//now we need to use the Solution class

	Solution obj;
	vector<int> ans = obj.bfstraversal(adj,5);
	printans(ans);
	return 0;
}

	
