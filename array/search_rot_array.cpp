//search in rotated sorted array
//~ Input: nums = [4,5,6,7,0,1,2], target = 0
//~ Output: 4

//if the time complexity is O(n) we can use linear search
//but we have a target of making it to O(log n)

//and the question is saying sorted
//we can use binary search

#include<bits/stdc++.h>
using namespace std;

int search_rot_array(vector<int>& arr,int n,int target) {
	int low = 0;
	int high = n-1;
	while(low<=high) {
		int mid = low + (high - low) / 2;

		if(arr[mid] == target) return mid;
		
		if(arr[low]<=arr[mid]) {
			if(arr[low]<=target && target <=arr[mid]) {
				high = mid - 1;
			}
			else {
				low = mid +1;
		}

		else {
			if(arr[mid]<=target && target<=arr[high]) {
				low = mid + 1;
			}
			else {
				high = mid - 1;
		}
	}
	return -1;
}

int main() {
	vector<int> arr = {7,8,9,1,2,3,4,5,6};
	int n = arr.size();
	int ans = search_rot_array(arr,n,5);
	cout << ans << endl;
	return 0;
	}
