#include<bits/stdc++.h>

using namespace std;

int find_peak(vector<int>arr) {

	int n = arr.size();
	for(int i=0;i<n;i++) {
		if((i == 0 || arr[i]>arr[i-1]) && (i == n-1 || arr[i]>arr[i+1])) {
			return i;
	
	}
	}
}
