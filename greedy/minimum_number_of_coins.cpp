/*
 *
 *
 *
 *
 * what is the minimum number of coins we need to make the change
 *
 *
 *
 * [1,2,5,10,20,50,100,500,1000]
 *these are cooins we need to add to form the v


 always fingd he minimum coins

 find the greatest less than v
  in this exaple we have 20


  algo
   start from the back and find just less than 49

 *
 *
 */

#include<bits/stdc++.h>

using namespace std;


int main() {
	int n;
	cin >> n;
	vector<int> ans(n);

	for(int i=0;i<n;i++) {
		cin >> ans[i];
	}

	int v;
	cin >> v;
	vector<int> res;
	for(int i=n-1;i>=0;i--) {
		while(v>=ans[i]) {
			v = v - ans[i];
			res.push_back(ans[i]);
		}
	}
	for(int i=0;i<res.size();i++) {
		cout << res[i] << " ";
	}

	
	return 0;
}



/*
 *
 *
 *
 * Minimum number of coins
Given a value N, if we want to make a change for Rs N and we have an infinite supply of each of the denominations in Indian currency. That is, we have an infinite supply of {1, 2, 5, 10, 20, 50, 100, 500, 1000} valued coins/notes. What is the minimum number of coins and/or notes needed to make the change?



Example:

Input:

1230

Output:

1000 100 100 20 10

*/


#include<bits/stdc++.h>

using namespace std;


int main() {
		int value;
  cin >> value;

  int arr[] = {1, 2, 5, 10, 20, 50, 100, 500, 1000};
  int n = sizeof(arr)/sizeof(arr[0]);



  for(int i=n-1;i>=0;i--) {
    	while(value >= arr[i]) {
          cout << arr[i] << "  ";

          value = value - arr[i];
        }
  }


}


