#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector<vector<int>> adj(n);
        for (auto &e : edges) {
            adj[e[0]].push_back(e[1]);
            adj[e[1]].push_back(e[0]);
        }

        vector<bool> vis(n, false);

        function<bool(int)> f = [&](int node) -> bool {
            if (node == destination) return true;
            vis[node] = true; 

            // cout << node << " -> checking..." << endl;

            for (int it : adj[node]) {
                if (!vis[it]) {
                    if (f(it))  
                        return true;
                }
            }
            return false;
        };

        return f(source);
    }
};

