/*

// my solution
//
// we are given 3 stacks and we need to level them according to their heights
//
//
// now the first brute force solution is we need to compute the heights of the stack
//
//
//like this
// eg : [5 4 3]   -> 5+4 = 9
// 		     9+3 = 12
//after that for each cummulative we need to store it in a ds
//
//now compare the 3 cummulatuive heights and if found push it in to the ans array
//
//
// at last return the max cummulative height


*/



#include<bits/stdc++.h>

using namespace std;


int f(vector<int>&s1,vector<int>&s2,vector<int>&s3) {
	
	int sum1 = 0;
	int sum2 = 0;
	int sum3 = 0;
	for(int i=0;i<s1.size();i++) {
		sum1 += s1[i];
	}
	
	for(int i=0;i<s2.size();i++) {
		sum2 += s2[i];
	}

	for(int i=0;i<s3.size();i++) {
		sum3 += s3[i];
	}

	int i=0,j=0,k=0;
	while(!(sum1 == sum2 && sum2 == sum3)) {
		if(sum1>sum2 && sum2 > sum3) {
			sum1 -= s1[i];
			i++;
		}
		else if(sum2 >= sum3 && sum1 > sum3) {
			sum2 -= s2[j];
			j++;
		}
		else {
			sum3 -= s3[k];
			k++;
		}
	}


	return sum1;
}
