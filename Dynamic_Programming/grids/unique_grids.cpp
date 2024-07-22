/* 
 *
 *
 * in this problem we need to find the no of paths from the start to end of the array
 *
 *
 * ie grid[0][0] to grid[m-1][n-1]
 *
 *
 *  for this we just need to find out the paths from first to last
 *
 *
 * up = (row-1,col)
 * left = (row,col-1)
 *
 *  base cases:
 *
 *
 *  if(the size is 0 then do nothing
 *  if size is 1 then return 1
 *
 *  
 *
 *  for better optimization we need to implement a dp array where we need to specify the calculated paths
 *
 *
 */

#include<bits/stdc++.h>

using namespace std;


int f(int row,int col, vector<vector<int>>& dp) {




	if(row==0 && col == 0) {
		return 1;
	}
	if(row<0||col <0) {
		return 0;
	}	

	//memorization check
	if(dp[row][col] != -1) {
		return dp[row][col];
	}


	int up = f(row-1,:col,dp);
	int left = f(row,col-1,dp);


	return dp[row][col] = up+left;
}


int main () 
{

	int n;
	cin >> n;
	int m;
	cin >> m;

	vector<vector<int>> dp(m,vector<int>(n,-1));

	return f(m-1,n-1,dp);
}







