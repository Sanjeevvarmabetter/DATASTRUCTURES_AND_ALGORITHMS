#include<bits/stdc++.h>

using namespace std;


vector<string> cavityMap(vector<string> grid) {
    int n = grid.size();
    
    for(int i=0;i<n-1;i++) {
        for(int j=0;j<n-1;j++) {
            if(grid[i][j] > grid[i][j-1] && grid[i][j] > grid[i][j+1] && grid[i][j] > grid[i+1][j] 
            && grid[i][j] > grid[i-1][j] ) {
                grid[i][j] = 'X';
            }
        }
    }
    return grid;
}


