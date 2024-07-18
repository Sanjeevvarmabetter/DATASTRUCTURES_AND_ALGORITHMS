#include<bits/stdc++.h>

using namespace std;


int theif(int n,int k,vector<char> arr) {
	queue<int> p;
	queue<int> t;

	int maxi = 0;

	for(int i=0;i<n;i++) {
		if(arr[i] == 'P') 
		{
			p.push(arr[i]);
		}
		else if(arr[i] == 'T') {
			t.push(arr[i]);
		}

	}

	while(!p.empty() && !t.empty()) {
		int p_pos = p.front();
		int t_pos = p.front();

		if(abs(p_pos - t_pos) <= k) {
			maxi++;
			p.pop();
			t.pop();
				
		}
	}


	return maxi;

}
int main() {
	int n;
	cin >>n;


	vector<char> arr(n);

	for(int i=0;i<n;i++) {
		cin >> arr[i];
	
	
	}

	int k;
	cin >> k;



	cout << theif(n,k,arr) << endl;
	return 0;
}

	
	
	
	


