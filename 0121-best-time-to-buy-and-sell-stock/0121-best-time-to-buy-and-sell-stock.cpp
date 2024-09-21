class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int maxi = 0; 
        int temp = prices[0];
        
        for(int i = 1; i < prices.size(); i++) {
            if(prices[i] < temp) {
                temp = prices[i];
            }
            int diff = prices[i] - temp;
            if(diff > maxi) {
                maxi = diff;
            }
        }

        return maxi; 
    }
};
