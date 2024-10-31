class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        int dp[coins.size() + 1][amount + 1];

        for (int i = 0; i <= coins.size(); i++) {
            dp[i][0] = 0; 
        }
        for (int j = 1; j <= amount; j++) {
            dp[0][j] = amount + 1; 
        }

        for (int i = 1; i <= coins.size(); i++) {
            for (int j = 1; j <= amount; j++) {
                if (coins[i - 1] > j) {
                    dp[i][j] = dp[i - 1][j]; 
                } else {
                    dp[i][j] = min(dp[i - 1][j], dp[i][j - coins[i - 1]] + 1); 
                }
            }
        }

        return dp[coins.size()][amount] > amount ? -1 : dp[coins.size()][amount];
    }
};
