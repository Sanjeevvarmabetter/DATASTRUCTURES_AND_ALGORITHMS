#include<bits/stdc++.h>

using namespace std;

class Solution {
    public:
    int findDigits(int n) {
        int counter = 0;
        int m = n;
        while(n!=0) {
             int rem = n%10;
            
             if(rem !=0 && m%rem==0) {
                counter++;
             }
            n = n/10; 
        }
        return counter;
    }
};


int main() {
    int n;
    cin >> n;
    Solution sol;
    int ans = sol.findDigits(n);
    cout << ans << endl;
    return 0;
}