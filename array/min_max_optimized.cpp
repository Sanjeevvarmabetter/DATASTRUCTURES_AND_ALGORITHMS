#include<bits/stdc++.h>

using namespace std;

int main() {
	int n,k;
	cin >> n >> k;

	vector<int>arr(n);

	for(int i=0;i<n;i++) {
		cin >> arr[i];
	}

	for(int i=0;i<n;i++) {
		for(int j=i+1;j<n;j++) {
			if(arr[i]>arr[j]) {
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}

	
	cout << arr[k-1] << endl;
	cout << arr[n-k] << endl;
	return 0;

}
