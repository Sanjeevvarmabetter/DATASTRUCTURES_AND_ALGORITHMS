/*
 * @lc app=leetcode id=785 lang=cpp
 *
 * [785] Is Graph Bipartite?
 */

// @lc code=start
class Solution {
private:
    bool dfs(int node,int col,int color[],vector<int> adjacent[]) {
            color[node]  = col;

            for(auto e : adjacent) {
                if (color[e] == -1) {
                    if(dfs(e,!col,color,adjacent==false)) {
                        return false;
                    }
                    else if(color[e] == col) {
                        return false;
                    }
                 }

                 return true;
            }

        }

public:
    bool isBipartite(vector<vector<int>>& graph) {
            int v = graph.size();

            int color[v];
            for(int i=0;i<=v;i++) {
                if(color[i] == -1) { //the node hasnt been visited in the graph traversal
                    if(dfs(i,0,color,adjacent=false)) {
                        return false;
                    } 
                }
                return true;
            }
    }
};
// @lc code=end

