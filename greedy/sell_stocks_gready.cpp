// just we need to code the multiple sums
//

#include<bits/stdc++.h>


using namespace std;


int max_profits(vector<int> arr) {
	int n = arr.size();

	int max_sum = 0;

	for(int i=1;i<n;i++) {
		if(arr[i] > arr[i-1]) {
			max_sum += arr[i] - arr[i-1];
		}
	}

	return max_sum;
}


int main() {
	int n;
	cin >> n;
	vector<int> ans(n);

	for(int i=0;i<n;i++) {
		cin >> ans[i];
	}


	int a = max_profits(ans);
	cout << a << endl;
	return 0;
}
