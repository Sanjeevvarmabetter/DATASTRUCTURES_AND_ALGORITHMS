//if the book is on the date -> no fine ie fine = 0

//after the expected <<day>> but within the same calender month and year

// fine  = 15 * number of days


//if the book is returned after the expected <<month>> but still within the same calender year
 
// fine = 500 * no of months late

// if the book is returned after the expected year then the fine is 1000



#include<bits/stdc++.h>

using namespace std;


class Solution {
    public:

    int library_fees(int d1,int m1,int y1,int d2,int m2,int y2) {
        if(y1>y2) {
            return 1000;
        }

        if(m1>m2 && y1==y2) {
            return 500 * (m1-m2);
        }
        if(d1>d2 && m1==m2) {
            return 15 * (d1-d2);
        }

        if(d1>d2 && m1>m2) {
            return 15*(d1-d2) + 500 * (m1-m2);
        }

        return 0;

    }
};

int main() {
    int d1,m1,y1;
    int d2,m2,y2;

    cin >> d1 >> m1 >> y1;
    cin >> d2 >> m2 >> y2;

    Solution sol;
    int ans = sol.library_fees(d1,m1,y1,d2,m2,y2); 
    
    cout << ans << endl;
    return 0;
    
}
