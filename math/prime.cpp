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


int main() {
	int n;
	cin >> n;
	if(isprime(n)) {
		cout << "Given number is a prime number" << endl;
	}
	else {
		cout << "Given number is not a prime number" << endl;
	}

	return 0;
}


