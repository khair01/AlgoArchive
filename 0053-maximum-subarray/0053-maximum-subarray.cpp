class Solution {
public:
    int maxSubArray(vector<int>& nums) {

        int maxarray = nums[0];
        int res = nums[0];
        if(nums.size() == 1){
            return nums[0];
        }
        for(int i = 0 ; i < nums.size() ; i++){

            maxarray = max(maxarray + nums[i], nums[i]);
            res = max(maxarray,res);
        }

        return res;
        
    }
};