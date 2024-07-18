#include<bits/stdc++.h>

using namespace std;


//// this is a greedy approach where with the largest amount in the array we will be giving the change

bool change_amount(vector<int>arr) {
 	int n = arr.size();
	int change  = 30;
	for(int i=0;i<n;i++) {
		while(change>arr[i]) {
		change = change - arr[i];

		}
	}
	
	if(change == 0) {
		return true;
	}
	else {
	return false;
	}	

}

int main() {
	int n;
	cin >> n;
	vector<int> ans;
	
	ans.resize(n);


	for(int i=0;i<n;i++) {
		cin >> ans[i];
	}

	int d = change_amount(arr);

	return 0;
}
