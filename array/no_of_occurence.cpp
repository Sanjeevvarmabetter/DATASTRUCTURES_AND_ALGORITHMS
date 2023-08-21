#include<bits/stdc++.h>
using namespace std;

int count(vector<int>&arr,int n,int target) {

	int c = 0;

	for(int i=0;i<n;i++) {
		if(arr[i]==x) c++;
	}
	return c;
}

int main()
{
	vector<int> arr = {2, 4, 6, 8, 8, 8, 11, 13};
	int n=8,target = 8;
	int ans = count(arr,n,target);
	cout << ans << endl;
	return 0;
	
}
