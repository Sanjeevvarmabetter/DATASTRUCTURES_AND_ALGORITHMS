#include<bits/stdc++.h>

using namespace std;

 int dynamic(int n,vector<int>&dp) {
	 if(n<=1) {
		 return n;
	 }
	
 	// i want the store also
	//
	if(dp!=-1) {
		return dp[n];
	}
	
	 // the formula

 	 return dp[n] = dynamic(n-1,dp) + dynamic(n+2,dp);

 }



int dynamic_bottomup(int n,vector<int>&dp) {
	
	dp[0] = 0;
	dp[1] = 1;

	for(int i=2;i<=n;i++) {

		//formula
		dp[i] = dp[i-1] + dp[i-2];
	}

	return dp[i];

}

	



int main() {
	int n;
	cin >> n;
	vector<int> dp(n+1,-1); // initially all the elements are -1
	cout << dynamic(n,sp);
	return 0;

}


