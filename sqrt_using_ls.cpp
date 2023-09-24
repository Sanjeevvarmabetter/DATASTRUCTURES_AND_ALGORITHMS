#include<iostream>
using namespace std;

int floorSqrt(int n) {
	int ans = 1;

	for(int i=1;i<=n;i++) {
		if(i*i <= n) {
			ans = i;
		}
		else {
			break;

	}
}
return ans;
}
