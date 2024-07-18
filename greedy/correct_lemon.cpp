#include<bits/stdc++.h>

using namespace std;


bool lemon_change(vector<int>&arr) {
	int n = arr.size();
	int five = 0;
	int ten = 0;

	for(int i=0;i<n;i++) 
	{
		if(arr[i] == 5) {
			five++;
		}
		
		if(arr[i] == 10) {
			//only if five is there
			//
			if(five) {

			
			ten++;
			five--;
		
			}

			else return false;
		}
		else {
			if(five&&ten) {
				ten--;
				five--;
			}
			else {
				if(five >= 3) {
					five = five - 3;
				}
				else {
					return false;
				}
			}
		}
		return false;

	}

	return true;
}

int main() {
	int n;
	cin >> n;
	vector<int> arr;
	arr.resize(n);

	for(int i=0;i<n;i++) {
		cin >> arr[i];
	}
	bool ans = lemon_change(arr);
	cout << ans << endl;

	return 0;
}

