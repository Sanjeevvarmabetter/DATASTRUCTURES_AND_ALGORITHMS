#include<bits/stdc++.h>
using namespace std;


	
void merge(vector<int> &arr,int low,int mid,int high) {
	
	vector<int> temp;
	int left = low;
	//[low....mid]
	int right = mid+1;
	//[mid+1 ... high]
	
	while(left<=mid && right<=high) {
		if((arr[left]<=arr[right])) {
			temp.push_back(arr[left]);
			left++;
		}
		else {
			
			temp.push_back(arr[right]);
			right++;
			}
	}
	while(left<=mid) {
		temp.push_back(arr[left]);
		left++;
		
		}
	while(right<=high) {
		temp.push_back(arr[right]);
		right++;
		}
		//now we have to transfer the temp elements to main array
		for(int i=low;i<=high;i++) {
			arr[i] = temp[i-low];
		}
}
void mergesort(vector<int>&arr,int low,int high) {
	
	if(low>=high) return; // recursion case
	
	int mid = (low+high)/2;
	mergesort(arr,low,mid);
	mergesort(arr,mid+1,high);
	merge(arr,low,mid,high);
	}

void mergeSort(vector < int > & arr, int n) {

    mergesort(arr,0,n-1);

}
