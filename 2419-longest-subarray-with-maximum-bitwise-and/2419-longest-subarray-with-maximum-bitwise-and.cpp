class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int max = *max_element(nums.begin(),nums.end());
        int count = 0;

        for(int i = 0 ; i < nums.size() ; i++){
            if( nums[i] == max ){
                ++count;
            }
        }

        return count;
    }
};