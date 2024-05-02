//simple to  find square of integers

#include<bits/stdc++.h>

using namespace std;


class Solution {
    public:
    int squares(int start,int end) {
        int count = 0;  
        for(int i=(int)sqrt(start);i*i<=end;i++){ // sqrt(24) = 
            int square = i*i;
            if(square>=start && square <= end) {
                count++;
            }
        }
        return count;
    }
};



int main() {
    int start,end;
    cin >> start >> end;
    Solution sol;

    int ans = sol.squares(start,end);
    cout << ans << endl;
    return 0;
}