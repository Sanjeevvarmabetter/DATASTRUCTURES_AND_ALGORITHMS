// input=10
//       15
// output = 7
//


// we need to find the max 
//
// use nested loops
//

#include<bits/stdc++.h>

using namespace std;


int main() {
	int n;
	int m;

	cin >> n >> m;
	
	int _max = -1;

	for(int i=n;i<=m;i++) {
		for(int j=n;j<=m;j++) {
			_max = max(i^j,_max);
		}
	}


	cout << _max << endl;
	return 0;

}
