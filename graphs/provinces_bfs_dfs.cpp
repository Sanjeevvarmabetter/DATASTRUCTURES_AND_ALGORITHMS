#include<bits/stdc++.h>
using namespace std;

// void dfs(int node,vector<int> adjlist[],int vis[]) {
//     vis[node] = 1;
//     for(auto i: adjlist[node]) {
//         if(!vis[i]) {
//             dfs(i,adjlist,vis);
//         }
//     }
// }

void bfs(int node,vector<int> adjlist[], int vis[]) {
    queue<int> q;
    q.push(node);
    vis[node] = 1;

    while(!q.empty()) {
        int current = q.front();
        q.pop();

        for(auto i: adjlist[current]) {
            if(!vis[i]) {
                q.push(i);
                vis[i]=1;
            }
        }
    }
}

int findNumOfProvinces(vector<vector<int>>& roads, int n) {
    // Write your code here.

    //first we need to change adjancency matrix to adj list
    vector<int> adjlist[n];
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            if(roads[i][j] == 1 && i != j) {
                adjlist[i].push_back(j);
                adjlist[j].push_back(i);
            }
        }

    }

    //initialize a vvisited array

    int vis[n] = {0};

    int count = 0;

    for(int i=0;i<n;i++) {
        if(!vis[i]) //if these are not in visited array
        {
            count++;
            //we can use either dfs or bfs
            // dfs(i,adjlist,vis);
            bfs(i,adjlist,vis);
        }
    }

    return count;

}