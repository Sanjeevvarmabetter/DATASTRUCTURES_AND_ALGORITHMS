#include<bits/stdc++.h>



using namespace std;

class Solution {
    private:
    bool dfscheck(int node,vector<int> adjacent,int visited[],int pathvisited[]) {
        visited[node] = 1;
        pathvisited[node] = 1;

        for(auto i:adjacent) {
            if(!visited) {
                if (dfscheck(i,adjacent,visited,pathvisited) == true) {
                    return true;
                }
                else  if(pathvisited[i]) {
                    return true;
                }

            }
            pathvisited[node] = 0;
            return false;
        }
    }

    public:
    bool iscyclic(vector<vector<int>> & edges, int v , int e) {
        int visited[v] = {0};
        int pathvisited[v] = {0};

        for(int i=0;i<=v;i++) {
            if(!visited[i]) 
            {
                if(dfscheck(i,edges,visited,pathvisited) == true) {
                    return true;
                }

                else 
                {
                    return false;
                }
            }
        }
    }
}