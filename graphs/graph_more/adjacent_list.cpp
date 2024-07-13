#include<bits/stdc++.h>

using namespace std;


void  print_adjacent(int v,vector<vector<int>>&ans) {
	for(int i=0;i<v;i++) {
		cout << i << "->";
	
	for(int j=0;j<ans[i].size();j++) {
		cout << " " << ans[i][j];
		if(j!=ans[i].size()-1) {
			cout << "->";
		}
	}
		cout << endl;
	}

}


int main() {
	
	int T;
	cin >> T;

	while(T--) {
		int v,e;
		cin >> v >> e;

		vector<vector<int>> adj(v);

		for(int i=0;i<e;i++) {
			int u,v;
			adj[u].push_back(v);
			adj[v].push_back(u);
		}
	

	print_adjacent(v,adj);
}



return 0;

}
