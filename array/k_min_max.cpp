#include<bits/stdc++.h>

using namespace std;

int main() {
	int n;
	int k;
	cin >> n >> k;
	vector<int> arr;
	arr.resize(n);

	for(int i=0;i<n;i++) {
		cin >> arr[i];
	}


	//sort the array
	//
	for(int i=0;i<n;i++) {
		for(int j=i+1;j<n;j++) {
			if(arr[i] > arr[j]) {
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	for(int i=0;i<n;i++) {
		if(i == k) {
			cout << arr[i] << endl;
		}
	}

	
	int count =1;
	for(int i=n-1;i>0;i--) {
		count++;
		if(count==k) {
			cout << arr[i] << endl;
		}
	}

	return 0;


}
}
