#include<bits/stdc++.h>

using namespace std;


int main() {
	int n;
	cin >> n;

	vector<int> arr(n);
	vector<int> ans(n);


	for(int i=0;i<n;i++) {
		cin >> arr[i];
	}
	
	
	for(int i=0;i<n;i++) {
	int product = 1;
		for(int j=0;j<n;j++) {
			if(i!=j) {
			product *= arr[j];
			}
		
		}

		ans[i] = product;
	}

	for(int i=0;i<n;i++) {
		cout << ans[i] << endl;
	}

	return 0;
}


		

