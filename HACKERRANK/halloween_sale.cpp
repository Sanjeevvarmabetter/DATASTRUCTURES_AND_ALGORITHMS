// the game costs p dollors and every subsequent game cost d dollors less than the prevoius


//this subtration continues until they become m or less

/// return how many games can we buy after the halloween sale


#include<bits/stdc++.h>

using namespace std;


class Solution {
    public:
    int how_many_games(int p,int d,int m,int s) {
            int total_amount_spent = 0;

            int counter = 0;

            while(total_amount_spent >= s) {
                counter++;
                s = s-p;
                if(p<=m) {
                    p = p+m;

                }
            }
    }
};




int main() {
    int p,d,m,s;
    cin >> p >> d >> m >> s;

    Solution sol;

    int ans = sol.how_many_games(p,d,m,s);

    cout << ans << endl;

    return 0;

}