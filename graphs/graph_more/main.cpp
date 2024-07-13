#include<bits/stdc++.h>

using namespace std;


void printadj(int v,vector<vector<int>>& adj) {
	for(int i=0;i<v;i++) {
		cout << i <<  "->";

		for(int j=0;j<adj[i].size();j++) {
			cout << " " << adj[i][j];
			if(j!=adj[i].size() -1) {
				cout << "->"
		}
		}
		cout << endl;
	}
}



int main() {

	int t;
	cin >> t;

	while(t--) {
		int n,m;
		cin >> n >> m;

		vector<vector<int>> adj(n);

		for(int i=0;i<m;i++) {
			int u,v;
			cin >> u >> v;

			adj[u].push_back(v);
			adj[v].push_back(u);

			printadj(v,adj);

		
		}

	}
	return 0;
}
