#include<bits/stdc++.h>
using namespace std;

int main() {
		int n;
		cin >> n;
		int arr[n];
		
		//filling the arrray
		for(int i=0;i<n;i++) {
			cin >> arr[i];
		}
		
		//precomputing the hash
		
		int hash[13] = {0};
		for(int i=0;i<n;i++) {
			hash[arr[i]] += 1;
		}
		
		int q;
		cin >> q;
		while(q--) {
			int num;
			cin >> num;
			
			//fetch
			
			cout << hash[num] << endl;
		}
		return 0;
}
