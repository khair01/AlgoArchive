#include <vector>
using namespace std;

class Solution {
public:
    void helper(vector<vector<int>>& ans, vector<vector<int>>& graph, int s, int e, vector<bool>& vis, vector<int>& currentPath){
        currentPath.push_back(s);
        vis[s] = true;

        if(s == e){
            ans.push_back(currentPath);
        }

        for(auto it: graph[s]){
            if(!vis[it]){
                helper(ans, graph, it, e, vis, currentPath);
            }
        }
        
        currentPath.pop_back();
        vis[s] = false;
    }

    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph){
        vector<vector<int>> ans;
        vector<bool> vis(graph.size(), false);
        vector<int> currentPath;

        helper(ans, graph, 0, graph.size() - 1, vis, currentPath);

        return ans;
    }
};
