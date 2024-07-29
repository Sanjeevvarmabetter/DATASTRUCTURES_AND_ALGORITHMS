// this is a simple question that deals with the minimum path 
// we need to return the minimum path solution while reading the grids
//
//
//



// algorithm 1) index
// 	     2) perfomr all the operation
// 	     3) return max or min

// for this problem we need to return the min path so init a counter and check int minimum value for the counter for every path
//

#include<bits/stdc++.h>

using namespace std;


int f(int row,int col,vector<vector<int>> &mat,vector<vector<int>>&dp) {



	// base cases
	//
	if(row < 0 && col < 0) {
		return 0;
	}

	if(row == 0 && col == 0) {
		return mat[0][0];
	}

	if(dp[row][col] != -1) {
		return dp[row][col];
	}

		
	int up = INT_MAX;
	int left = INT_MAX;
	
	// for better optimization we will be using row>0 and col >0
	
	if(row>0)
		 up = mat[row][col] + f(row-1,col,mat,dp);

	if(col>0) 
		left = mat[row][col] + f(row,col-1,mat,dp);

	return dp[row][col] = min(up,left);
}

int minpath(int row,int col,vector<vector<int>>&mat) {
	vector<vector<int>>dp(row,vector<int>(col,-1));

	return 	f(row-1,col-1,mat,dp);
}

