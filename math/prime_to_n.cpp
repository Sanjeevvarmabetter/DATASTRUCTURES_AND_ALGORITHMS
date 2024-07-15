#include<bits/stdc++.h>

using namespace std;


bool isprime(int n) {
	if(n==1) return false;
	for(int i=2;i<n;i++) {
		if(n%i==0) {
			return false;
		}
	}

	return true;



}


void printN(int n) {
	for(int i=2;i<=n;i++) {
		if(isprime(i)) {
			cout << i << " ";
		}
	}
}
		
int main() {
	int n;
	cin >> n;
	
	printN(n);
	return 0;
}


