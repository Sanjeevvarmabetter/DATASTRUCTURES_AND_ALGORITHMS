// initially it is shared to 5 people
// then floor(5/2) = 2

///alwaays divided by 2


#include<bits/stdc++.h>

using namespace std;


class Solution {
    public:
    int find_cummulative_likes(int n) {
        int shared = 5;
        int liked;
        int cummulative = 0;

        for(int i=0;i<n;i++) {
            shared = shared / 2;
            liked = shared;
            shared = shared*3;
            cummulative = cummulative + liked;
        }

        return cummulative;
    }
};


int main() {
    int n;
    cin >> n;
    Solution sol;
    int ans = sol.find_cummulative_likes(n);
    cout << ans << endl;
    return 0;
}