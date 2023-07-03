#include<bits/stdc++.h>
using namespace std;

int main() {
	
	int n;
	cin >> n;
	int arr[n];
	
	for(int i=0;i<n;i++) {
		cin >> arr[i];
	}
	
	//precomputation using a map
	
	map<int,int> m;		//this is how we declare a map
	for(int i=0;i<n;i++) {
		m[arr[i]]++;
	 }
	//iterate the map
	for(auto o:m) {
		cout << o.first << "->" << o.second << endl;
	}
	
	 
	 int a;
	 cin >> a;
	 
	 while(a--) {
		 int q;
		 cin >> q;
		 
		 cout << m[q] << endl;
	
	}
	return 0;
}
