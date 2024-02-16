#include<bits/stdc++.h>

using namespace std;

void min_max(vector<int> arr) {
	long min=0,max=0;
	int n = arr.size();
	for(int i=0;i<n-1;i++) {	
		min = min + arr[i];
	}
	
	for(int i=1;i<n;i++) {
		max = max + arr[i];
	}

	cout << min << " " << max << endl;
}


