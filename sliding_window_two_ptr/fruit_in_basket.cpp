// this problem 

// findig the max length subarray atmost 2 types of numbers
//

	

///  brute force
//   1) generate all the subarrays


int f(vector<int> ans) {

	int max_length = INT_MIN;
	for(int i=0;i<ans.size();i++) {
		unordered_set<int> hashset;

		for(int j=i;j<ans.size();j++) {
			hashset.add(ans[j]);

			if(hashset.size() <= 2) {
				max_length = max(max_length,j-i+1);
			}
			else {
				break;
			}
		}
	}
	return max_length;
}


int main() {
	int n;
	cin >> n;
	vector<int> ans(n);

	for(int i=0;i<n;i++) {
		cin >> ans[i];
	}

	int res = f(ans);
	cout << res << endl;
	return 0;
}


				
