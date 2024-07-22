#include<bits/stdc++.h>

using namespace std;


// n = 2
//
// either 1 or 2
//
// ans = 2
//


int climb(int n) {
	if(n<=1) {
		return 1;
	}

	return climb(n-1) + climb(n-2);
}




int main() {
	int n;
	cin >> n;

	int ans = climb(n);
	cout << ans << endl;
	return 0;
}

