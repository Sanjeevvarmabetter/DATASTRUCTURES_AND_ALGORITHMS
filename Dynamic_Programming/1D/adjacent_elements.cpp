// the formula can be pick = arr[index] + f[index - 2]
//			non_pick = 0 + f[index]
//


#include<bits/stdc++.h>

using namespace std;


int adjacent(vector<int>&heights,int n,vector<int>&dp) {
	if(n==0) {
		return heights[n];
	} 
	if(n<0) {
		return 0;
	}


	if(dp[n] != -1) {
		return dp[n];
	}

	int pick = heights[n] +adjacent(heights,n-2,dp);
	int not_pick = 0 + adjacent(heights,n-1,dp);


	return dp[n] =  max(pick,not_pick);
}


int bottom_up(vector<int>&heights,int n) {
	
	vector<int> dp(n,0);
	dp[0] = heights[0];
	int neg = 0;

	for(int i=1;i<n;i++) {

		int take = heights[i] + dp[i-2];
		int non_take = 0 + dp[i-1];

		dp[i] = max(take,non_take);
	}
}


int main() {
	int n;
	cin >> n;
	vector<int>heights;
	heights.resize(n);

	//visited  for less computation
	vector<int> dp(n,-1);	
	
	for(int i=0;i<n;i++) {
		cin >> heights[i];
	}

	int ans = adjacent(heights,n-1,dp);

	cout << ans << endl;
}


