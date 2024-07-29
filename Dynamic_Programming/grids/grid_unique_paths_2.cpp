// leetcode unique paths-2
// lc - 63
//


// if we get a grid as -1 then it is a invalid so return 0
//
//


// take indexs, perform all steps, rerturn max
//

//dp array for memorization    vector<vector<int>> dp(n, vector<int>(m, -1)); // DP table to memoize results


#include<bits/stdc++.h>


using namespace std;


int f(int rows,int col,vector<vector<int>> &maze,<vector<vector<int>>&dp) {
	// base cases
	if(row == 0 || col == 0) {
		return 1;
	}

	if(row < 0 || col < 0) {
		return 0;
	}

	if(row <0 || col < 0 || maze[row][col] == -1) {
		return 0;
	}

	if(dp[row][col] == -1) {
		return dp[row][col];
	}

	int left = f(row-1,col,maze,dp);
	int right = f(row,col-1,maze,dp);

	return dp[row][col] = left + right;
}
	


}


int obstacles(int row,int col,vector<vector<int>> ob) {
     	vector<vector<int>> dp(row, vector<int>(col, -1)); // DP table to memoize results


	return f(row-1,col-1,dp);
}


