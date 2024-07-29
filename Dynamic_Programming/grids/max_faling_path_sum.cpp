#include<bits/stdc++.h>

using namespace std;


int f(int row,int col,vector<vector<int>>&mat,vector<vector<int>>&dp) {
		
	int n = mat.size();

	if(row == 0) {
		return mat[0][col];
	}

	if(col<0 || col >= n) {
		return -1e9;
	}

	int up = mat[row-1][col] + f(row-1,col,mat,dp);

	int right_up = mat[row-1][col] + f(row-1,col+1,mat,dp);

	int left_up = mat[row-1][col] + f(row-1,col-1,mat,dp);

	return dp[row][col] = min(up, max(right_up,left_up));

}

int max_path(vector<vector<int>> mat) {
	int n = mat.size();
	
	int row = mat.size();
	int col = mat[0].size();



	vector<vector<int>>dp(row,vector<int>(col,-1));

	return f(row-1,col,mat,dp);

}
