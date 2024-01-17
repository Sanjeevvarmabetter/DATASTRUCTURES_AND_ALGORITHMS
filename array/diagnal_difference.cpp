#include<bits/stdc++.h>

using namespace std;

int diagnal(vector<vector<int>> arr)  {
    int tracea = 0;
    int traceb = 0;
    for(int i=0;i<arr.size();i++) {
        if(i<arr[i].size()) {
            tracea = tracea + arr[i][i];
            traceb = traceb + arr[i][arr.size() - 1 - i];
        }
    }

    int ans = tracea - traceb;

    return abs(ans);
}