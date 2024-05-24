#include<bits/stdc++.h>

using namespace std;


class Solution {
    public:
    string bigger(string s) {
        int i;
        int n = s.length();
        for(i=n-2;i>=0;i--) {
            if(s[i]<s[i+1]) {
                break;
            }
        }
            if(i=-1) {
            return "no answer";             
            }

            // now we have the  pivot in the memory let us scan from right to left and find first
            // char larger than the pivot
            int j;
            for(j=n-1;j>1;j--) {
                if(s[j]>s[i]) {
                    break;
                }
            }


             // swap 
            swap(s[i],s[j]);
            
            
             // reverse

            reverse(s.begin()+i+1,s.end());

            return s;
        } 
        
};


int main() {
    string s;
    cin >> s;
    Solution sol;
    string ans = sol.bigger(s);
    cout << ans << endl;
    return 0;
}