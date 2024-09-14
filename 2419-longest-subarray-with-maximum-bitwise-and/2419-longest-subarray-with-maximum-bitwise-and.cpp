class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int maxi = *max_element(nums.begin(), nums.end());  
        int count = 0;
        int result = 0;  
        
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == maxi) {
                ++count;  
            } else {
                result = max(result, count);  
                count = 0;  
            }
        }
        result = max(result, count);

        return result;
    }
};
