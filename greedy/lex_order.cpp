#include<bits/stdc++.h>

using namespace std;


vector<int> findSmallestPermutation(vector<int> arr, int k) {
    int n = arr.size();

    for (int i = 0; i < n - 1 && k > 0; i++) {
        // Find the smallest element in the range arr[i] to arr[min(i + k, n-1)]
        int pos = i;
        for (int j = i + 1; j < n && j <= i + k; j++) {
            if (arr[j] < arr[pos]) {
                pos = j;
            }
        }

        // If the smallest element is already at the current position, continue
        if (pos == i) continue;

        // Perform the swaps to move the smallest element to the current position
        int value = arr[pos];
        for (int j = pos; j > i; j--) {
            arr[j] = arr[j - 1];
        }
        arr[i] = value;

        // Decrement k by the number of swaps performed
        k -= (pos - i);
    }

    return arr;
}




int main() {
	int n;
	cin >> n;
	vector<int> ans(n);

	for(int i=0;i<n;i++) {
		cin >> ans[i];
	}

	int k;	
	cin >> k;	
	
	vector<int> res = findSmallestPermutation(ans,k);
	for(int i=res.size()-1;i>=0;i--) {
		cout << res[i] << " ";
	}
	cout << endl;



	return 0;
}

	
