/*
 *
 * my initial solution is use an unordered map and <int,char>
 *
 *
 *  and print the most frequent char
 *
 *
 */

#include<bits/stdc++.h>

using namespace std;


int count(string st,char s) {
	
	int n = st.length();
	
	int count = 0;
	for(int i=0;i<n;i++) {
		if(st[i] == s) {
			count ++;
		} // this will count for each and every char
		  //

	}
	
	return count;

}



string frequentChar(string s) {

	int n = s.length();

	vector<pair<int,char>> ans;

	for(int i=0;i<n;i++) {

		ans.push_back(make_pair(count(s,s[i]),s[i]));
	}


	sort(ans.begin(),ans.end());

	for(int i=0;i<n;i++) {
		cout << ans[i] << endl;
	}

}

int main() {
	string s;
	cin >> s;

	
	string ans = frequentChar(s);

	cout << ans << endl;
	return 0;
}




