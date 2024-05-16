// if the 9 is not a border then it is a cavity replace with x
//

#include<bits/stdc++.h>

using namespace std;


class Solution {
    private:
    vector<string> cavityMap(vector<string> grid,int n) {


        for(int i =0;i<n;i++) {
            for(int j =0;j<n;j++) {
                if(grid[i][j] != grid[j][i]) {
                    if(grid[i][j] == '9') {
                        grid[i][j] = 'X';
                    }
                }
            }
        }


    }

    vector<string> cavityMap(vector<string> grid) {
        
    }
}; 


int main() {



}