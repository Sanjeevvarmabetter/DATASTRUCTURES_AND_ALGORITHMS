#include<bits/stdc++.h>
using namespace std;

class Solution {

private:
void dfs(int node,int visited[],stack<int> s,vector<int> adj[]) {
    //code dfs algorithm

    visited[0] = 1;

    for(auto it:adj[node]) {
        if(!visited[it]) {
            dfs(it,visited,s,adj);
        }
    }

    s.push(node);
}

public:

vector<int> topologicalSort(vector<vector<int>> &graph, int edges, int nodes) {
    // Write your code here!

    // we need a visited array 
    //we need a stack data structure where we are going to store all the visited nodes
    
    int visited[graph] = {0};
    stack<int> s;

    for(int i=0;i<graph;i++) {
        if(!visited[i]) {
            dfs(i,visited,s,graph);
        }
    }

    //to print the ans 

    // i need to move all the elements from stack to vector
    vector<int> ans;

    while(!s.empty()) {
        ans.push_back(s.top());
        s.pop(); // i dont want that element in my stack anymore
    }
    
    return ans;
}

};