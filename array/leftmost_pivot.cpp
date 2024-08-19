#include<bits/stdc++.h>

using namespace std;



int main() {
	
	int n;
	cin >> n;

	vector<int> arr(n);

	for(int i=0;i<n;i++) {
		cin >> arr[i];
	}
	
	int total = 0;

	for(int i=0;i<n;i++) {
		total += arr[i];
	}
	//now we have total filled with array sum	
	//
	
int left = 0;
bool l = false;
	for(int i=0;i<n;i++) {
		total -= arr[i];


		if(left == total) {
			
			cout << i<< endl;
			l = true;
		}
	left += arr[i];

		}

		if(!l) {
			return -1;
		}

	return 0;

}	



