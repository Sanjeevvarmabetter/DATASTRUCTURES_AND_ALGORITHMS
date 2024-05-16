#include<bits/stdc++.h>

using namespace std;


class Solution {

    public:
    string ceaserCipher(string s,int k) {
        int n = s.length();

        string ans = "";

        for(int i=0;i<n;i++) {
                if(isalpha(s[i])) {
            if(isupper(s[i])) {
                ans += char(int(s[i] + k - 65) % 26 + 65);  
            }

            else {
                ans += char(int(s[i]+k - 97) % 26 + 97);
            }
        }
        
        else {
            ans += s[i];
        }
        }
        return ans;
    }
};


int main() {
    string s;

    int k;

    cin >> s;

    cin >> k;

    Solution sol;

    string ans = sol.ceaserCipher(s,k);

    cout << ans << endl;
    return 0;
}