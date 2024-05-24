#include<bits/stdc++.h>

using namespace std;

class Solution {
  public:
        string append_and_delete(string s,string t,int k) {
            int common = 0;

            for(int i=0;i<=s.length();i++) {
                if(s[i]==t[i]) {
                    common++;
                }
            }

            int total_length = s.length() + t.length();

            if(k>= total_length) {
                return "Yes";
            }

            if(k>= total_length + common) {
                if(k%2 ==0 ) {
                    return "Yes";
                    
                }
            }

            if(k>=total_length + 2*common) {
                return "No";
            }
            
            if(k =total_length) { 
                if(k%2!=0) {
                    return "No";
                }

            }

            if(s.length() == t.length() && k>2*s.length()) {
                return "No";
            }
            return ;
        }

        
};



int main() {
    string s;
    string t;
    int k;
    cin >> s >> t >> k;
    Solution sol;
    string ans = sol.append_and_delete(s,t,k);
    cout << ans << endl;
}