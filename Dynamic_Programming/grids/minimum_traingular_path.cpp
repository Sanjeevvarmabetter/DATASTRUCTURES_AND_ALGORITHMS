#include<bits/stdc++.h>


using namespace std;


int f(int row,int col,vector<vector<int>>&mat,vector<vector<int>>&dp) {
	
	int n = mat.size();

	if(row == n-1) {
		return mat[row][col];
	}

	if(dp[row][col] != -1) {
		return dp[row][col];
	}

	int bottom  = INT_MAX;
	int bottom_right = INT_MAX;

	if(row+1 < n) {
		bottom = mat[row][col] + f(row+1,col,mat,dp);
	}
	if(row+1<n && col + 1 < mat[row+1].size()) {
		bottom_right = mat[row][col] + f(row+1,col+1,mat,dp);
	}

	return dp[row][col] = min(bottom,bottom_right);
}

int minimumtraingularPath(vector<vector<int>> mat) {
	int n = mat.size();

	int row = mat.size();
	int col = mat[0].size();

	vector<vector<int>> dp(row,vector<int>(col,-1));

	return f(row-1,col-1,mat,dp);
}

