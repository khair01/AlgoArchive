class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if (prices.empty()) return 0;
        return divideAndConquer(prices, 0, prices.size() - 1);
    }

private:
    int divideAndConquer(vector<int>& prices, int left, int right) {
        if (left >= right) return 0;
        int mid = left + (right - left) / 2;

        int leftProfit = divideAndConquer(prices, left, mid);
        int rightProfit = divideAndConquer(prices, mid + 1, right);

        int minLeft = INT_MAX;
        for (int i = left; i <= mid; i++) {
            minLeft = min(minLeft, prices[i]);
        }

        int maxRight = INT_MIN;
        for (int i = mid + 1; i <= right; i++) {
            maxRight = max(maxRight, prices[i]);
        }

        int crossProfit = maxRight - minLeft;

        return max({leftProfit, rightProfit, crossProfit});
    }
};
