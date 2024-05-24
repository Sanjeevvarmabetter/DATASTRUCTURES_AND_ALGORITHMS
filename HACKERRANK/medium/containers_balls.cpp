/* we have balls and containers we just need to rearrange the balls in the containers
    only one type of ball. but using only swap operation



*/





// the input is

/*
2
2
1 1
1 1
2
0 2
1 2
*/



// rows are number of containers and columsn are the number of ball types





#include<bits/stdc++.h>


using namespace std;


class Solution {
      public:
    string organise_containers(vector<vector<int>> container) {

        int n = container.size();

        vector<int> c_total(n,0);
        vector<int>types_total(n,0);

        for(int i=0;i<n;i++) {
            for(int j=0;j<n;j++) {
                c_total[i] = c_total[i] + container[i][j];
                types_total[j] = types_total[j] + container[i][j];
            }
        }


        sort(c_total.begin(),c_total.end());
        sort(types_total.begin(),types_total.end());
    
        if(c_total == types_total) {
            return "Possible";
        }
        else {
            return "Impossible";
        }



    }
};


int main() {
    int n;

}