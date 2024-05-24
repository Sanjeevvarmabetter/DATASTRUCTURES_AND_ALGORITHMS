#include<bits/stdc++.h>

using namespace std;


class Solution {
    public:
    string bigger_is_greater(string s) {
        // s = ab -> ba
        // s = abcd -> abdc   

        int n = s.length();
        int i;
        for(i=n-2;i>=0;i--) {
            if(s[i]<s[i+1]) {
                break;
            }
        }
            // abcd 
        
        if(i==-1) {
            return "no answer";
        }

        int j;
        for(j=n-1;j>i;j--) {
            if(s[j]>s[i]) 
            {
                break;
            }
        }

        swap(s[i],s[j]);

        reverse(s.begin()+i+1,s.end());


            return s;
      }

};


int main() {
    string s;
    cin >> s;
    Solution sol;
    string ans = sol.bigger_is_greater(s);

    cout << ans << endl;
}