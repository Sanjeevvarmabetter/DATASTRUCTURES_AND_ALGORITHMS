#include<iostream>
using namespace std;

int floorSqrt(int n) {
	int low = 1,high = n,ans = 1;
    if(n==0 || n==1) {
        return n;
    }

	while(low <= high) {
		long long mid = low + (high - low)/2;
		if(mid*mid <= n){
			ans = mid;
			low = mid + 1;
		}
		else {
			high = mid - 1;

	}
	}
	return ans;
}
