// the game costs p dollors and every subsequent game cost d dollors less than the prevoius


//this subtration continues until they become m or less

/// return how many games can we buy after the halloween sale


#include<bits/stdc++.h>

using namespace std;


class Solution {
    public:
    int how_many_games(int p,int d,int m,int s) {
         int current_balance = p;
         int remaining_balance = s;
         int counter = 0;

         while(remaining_balance >= current_balance) {
          remaining_balance = remaining_balance - current_balance;
          counter++;
          current_balance = max(current_balance-d,m);
          }
          return counter;
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
