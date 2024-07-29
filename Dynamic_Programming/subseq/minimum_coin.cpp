// the question is minimum coins
//
// we are given a target and we need to find the distinct numbers denoting the coin deniinations 
//
//
//
// [1,2,3]  target = 7
//
// {3,3,1}


//
//

int f(int n,vector<int>arr,vector<vector<int>>dp,int target) {

	// n-1 
	// n-2
	// n-3

	if(n==0) {
		
	if(target%arr[0] == 0) {
		return target/arr[0];
	}

	else {
		return 1e9;
	}
	}

	if(dp[n][t] != -1) {
		return dp[n][t];
	}

	// in these subsequence problems we will use taken and not taken
	
	int nottaken = 1 + f(n,arr,dp,target);

	int taken = 0 + f(n-1,arr,dp,target-arr[n]);

	return dp[n][t] = min(nottaken,taken);
	}



