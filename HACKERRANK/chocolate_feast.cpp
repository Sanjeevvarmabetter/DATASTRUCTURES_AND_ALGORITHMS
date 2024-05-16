#include<bits/stdc++.h>

using namespace std;

class Solution {
    public:
        int chocolate_feast(int n,int c,int m) {
            int basic = n/c;
            int x = basic;
            int sum = 0;

            while(x>0) {
                sum = sum + x;
                x = basic/m;
                basic = (basic%m) + (basic/m);
            }

            return sum;

       }

};

int main() {
    int n,c,m;
    cin >> n >> c >> m; 

    Solution sol;
    int ans = sol.chocolate_feast(n,c,m);

    cout << ans << endl;

    return 0;


}