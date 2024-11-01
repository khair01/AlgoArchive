#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int m, n;
    vector<vector<int>> dp;

    int dfs(int row, int col, const vector<vector<int>>& grid) {
      
        if (row < 0 || row >= m || col >= n) return 0;

        if (dp[row][col] != -1) return dp[row][col];

        int maxMoves = 0;

       
        if (row > 0 && col < n - 1 && grid[row - 1][col + 1] > grid[row][col]) {
            maxMoves = max(maxMoves, 1 + dfs(row - 1, col + 1, grid));
        }
        if (col < n - 1 && grid[row][col + 1] > grid[row][col]) {
            maxMoves = max(maxMoves, 1 + dfs(row, col + 1, grid));
        }
        if (row < m - 1 && col < n - 1 && grid[row + 1][col + 1] > grid[row][col]) {
            maxMoves = max(maxMoves, 1 + dfs(row + 1, col + 1, grid));
        }

        return dp[row][col] = maxMoves;
    }

    int maxMoves(vector<vector<int>>& grid) {
        m = grid.size();
        n = grid[0].size();
        dp = vector<vector<int>>(m, vector<int>(n, -1)); 

        int result = 0;
        for (int row = 0; row < m; ++row) {
            result = max(result, dfs(row, 0, grid));
        }

        return result;
    }
};
