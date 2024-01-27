#include<bits/stdc++.h>

using namespace std;

class Solution {

public:
	int eletronicshop(vector<int> keyboards,vector<int> drives,int b) {
		int max_spent = -1;
		int temp = 0;
	for(int i=0;i<keyboards.size();i++) {
		for(int j=0;j<drives.size();j++) {
			temp = keyboards[i] + drives[j];
			if(temp < b  && temp >= max_spent) {
				max_spent = temp;
		}
	}	
	}
	if(max_spent == 0) {
	return -1;
	}
		else {
	return max_spent;
}
}

};
