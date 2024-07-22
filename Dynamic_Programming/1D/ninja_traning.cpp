#include<bits/stdc++.h>

using namespace std;



int ninja(int day,int last,vector<vector<int>> &points,vector<vector<int>> &dp) {

	// for the base case
	
	if(dp[day][last] != -1) {
		return dp[day][last];
	}


	if(day==0) {
		return 0;
	}
	int maxi = 0;

	for(int i=0;i<3;i++) {
		if(i!=last) {
			maxi = max(maxi,points[0][i]); // this will calculate the maximm points for the frst day
			}
	return dp[day][last] = maxi; //store in dparray
	}


	maxi = 0;

	//since we know the first day max now instead of first day max use another
	

	for(int i=0;i<3;i++) {
		if(i!=last) {
			int maxi_score  = points[day][i] + ninja(day-1,last,points,dp); // this recirsion will compute the max 

			maxi = max(maxi,maxi_score);
		}
	}

	return dp[day][last] = maxi; 


}

int main() {
	int n,m;
	cin >> n;
	cin >> m;
	vector<vector<int>> points_table;
	for(int i=0;i<n;i++) {
		for(int j=0;j<n;j++) {
			cin >> points_table[i][j];
		}
	}
	vector<vector<int>> dp(n, vector<int>(4,-1));

	//n-1 is from last
	int ans = ninja(n-1,3,points_table,dp);

	cout << ans << endl;
	return 0;
}

