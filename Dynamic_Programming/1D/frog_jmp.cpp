/*
 *
 *
 * we need to jump to the n the step
 *
 * and we need to find the minimum steps
 *
 * the  energy comsumed for each step is abs(height[i] - height[j])
 *
 
 */

#include<bits/stdc++.h>

using namespace std;

int frog(int n,vector<int>&height,vector<int>&dp) {

	

	if(n==0) {
		return 0;

	}


	if(dp[n] != 0 ) {
		return dp[n];
	}

	int left = frog(n-1,height,dp) + abs(height[n] - height[n-1]);
	int right = INT_MAX;
	if(n>1) {
	 right = frog(n-2,height,dp) + abs(height[n]- height[n-2]);

	}

	return dp[n] = min(left+right);


}

// this is tabulation method



int bottom_up(vector<int>&height,int n) {
	vector<int>dp(n,0);

	dp[0] = 0;

	for(int i=1;i<n;i++) {
	int first = height[i-1] + abs(height[n] + height[n-1]);
	int second = INT_MAX;
	if(n>1) {
	second = height[i-2] + abs(height[n] + height[n-2]);
	}
	
	dp[i] = min(first,second);
	}

	return dp[n-1];

}


/// now we need to code k steps
//
/

int k_steps(vector<int>&height,int n,int k) {
	if(n==0) {
		return 0;
	}

	int min_steps = INT_MAX;

	for(int j=0;j<k;j++) {
		int jmp = k_steps(height,n-j,k) + abs(height[n] - height[n-k]);
		min_steps = min(min_steps,jmp);
	}
	return min_steps;

}

int main() {
	int n;
	cin >>n;
	vector<int> ans;
	ans.resize(n);

	for(int i=0;i<n;i++) {
		cin >> ans[i];
	}
	vector<int> dp(n,-1);
	int a = frog(n,ans,dp);
	cout << a << endl;
	return 0;


}
