/* 
 *
 * we need to sell the stocks for the maximum profit
 *
 *
 * for that we just nneed to find the minium number and sub with next number
 *
eg - 7,1,5,3,6,4
 after finding the minim element finf the maximum element then sub it
 */


#include<bits/stdc++.h>


using namespace std;




int main() {
	int n;
	cin >> n;
	vector<int>arr(n);

	for(int i=0;i<n;i++) {
		cin >> arr[i];
	}
	
	int mini = arr[0];
	int profit  = 0;
	int cost;

	for(int i=1;i<n;i++) {
		cost = arr[i] - mini;

		profit = max(profit,cost);

		mini = min(mini,arr[i]);
	}

	return profit;
}
