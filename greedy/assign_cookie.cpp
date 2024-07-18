/*
statement: Given two arrays representing children’s green factor and cookie sizes, the goal is to maximise the number of content children.

*/

/*
A greedy algorithm makes a series of choices, each of which looks best at the moment (locally optimal).
*/


// if the size of cookie is greater than the sizr
//
//
// in the greedy algorithm we will be assignig the cookies  based on the greed factor
//
//
// algoriithm 
//
//
// first sort the both  arrays
//
// then using two pointers now compare the elements of the both array
//


#include<bits/stdc++.h>


using namespace std;

int main() {
	int n;
	int m;
	vector<int> greed(n);
	vector<int> cookies(m);	

	for(int i=0;i<n;i++) {
		cin >> greed[i];
	}

	for(int i=0;i<m;i++) {
		cin >> cookies[i];
	}

	sort(greed.begin(),greed.end());

	int i=0;
	int j = 0;

	while(i<n && j<m) {

	if(greed[i] <= cookies[j]) {
		i++;
	}

	j++;

	}

	return j;

}



	
