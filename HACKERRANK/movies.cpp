#include<bits/stdc++.h>
using namespace std;
// reverse number difference



class Solution {
    public:
    int reverse(int i) {
        // 20 -> 02

        int temp=0;
        int l=i;
        while(i!=0) {
            int rev = i%10;
            temp = temp *10 + rev;
            i = i/10;
        }

        return temp;
    }


        int bruteforce_beautiful_days(int i,int j,int k) {

            int counter = 0;
            for(int m = i;m<=j;m++) {
                int rev = abs(reverse(m) - m);
                if(rev%k==0) {
                    counter++;
                }
            }

            return counter;
        }
};

int main() {
    int i,j,k;
    cin >> i >> j >> k;

    //create an object

    Solution sol;

    int ans = sol.bruteforce_beautiful_days(i,j,k);

    cout << ans << endl;

}