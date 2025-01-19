//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    bool isBipartite(vector<vector<int>>& adj) {
        // Code here
        
        int n = adj.size();
        vector<bool>vis(n);
        vector<int> col(n , -1);
        int flag = true;
        
        
        function < void (int , int) > f = [&] (int node , int c)
        {
            vis[node] = true;
            col[node] = c;
            for(auto it : adj[node])
            {
                if(!vis[it])
                {
                    if(c == col[it])
                    {
                        flag = false;
                        return;
                    }
                    
                    f(it , c ^ 1);
                    
                }
                else
                {
                    if(c == col[it])
                    {
                        flag = false;
                        return;
                    }
                    
                }
            }
        };
        
        
        for(int i = 0 ; i < n ; i++)
        {
            if(!vis[i])
            {
                f(i , 0);
            }
        }
        
        
        return flag;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;
        vector<vector<int>> adj(V);
        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        Solution obj;
        bool ans = obj.isBipartite(adj);
        if (ans)
            cout << "true\n";
        else
            cout << "false\n";

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends