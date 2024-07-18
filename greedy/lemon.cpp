/*
 *

Input: bills = [5, 5, 5, 10, 20]
                
Output: True



we need two counter

 5s and 10s


if we get a 5 do nothin

if we get a 10 increment 10 anf deceremtn one 5

if we get 20 check if both 5 and 10 are avalicable  and decrement one 5 and one 10



*/



#include<bits/stdc++.h>


using namespace std;

bool lemon(vector<int>arr) {
	int n = arr.size();


	int five = 0;
	int ten = 0;

	for(int i=0;i<n;i++) {
		if(arr[i] == 5) {
			five++;
		}
		else if(arr[i] == 10) {

			if(five) {

			ten++;
			five--;
			
		}
			else {
				return false;
			}
		}


		else {
			return false;

		}

		else if(arr[i] == 20) {

			if(five && ten) {

			ten--;
			five--;
		}
			else {
				return false;
		}

			else if (five>=3) {
				five -= 3
			}
	}
	}
	


	return true;

}


