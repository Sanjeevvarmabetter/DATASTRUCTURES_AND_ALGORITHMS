#include<bits/stdc++.h>
using namespace std;


int small(vector<int> &arr,int divisor) {
	int sum = 0;
	int n = arr.size();

	for(int i=0;i<n;i++) {
		sum = sum + ceil((double) (arr[i]) / (double) (divisor));
	}
	return sum;
}


int smallestdivisor(vector<int>& arr,int limit) {

	int low = 1;
	int high = *max_element(arr.begin(),arr.end());

	while(low <= high) {
		int mid = (low+high)/2;
		if(small(arr,mid <= limit)) {
			high = mid - 1;
		}
		else {
			low = mid + 1;

		}
	}
	return low;

}
