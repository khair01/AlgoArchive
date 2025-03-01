class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        
        for(int i = 0 ; i < nums.size() - 1 ; ++i){
            if(nums[i] == nums[i + 1]){
                nums[i] *= 2;
                nums[i + 1] = 0;
            }
        }
        vector<int>x;
        // for(int i = 0 )
        int i;
        for(i = 0 ; i < nums.size() ; ++i){
            if(nums[i] != 0){
                x.push_back(nums[i]);
            }
        }

        for(i = 0 ; i < nums.size() ; ++i){
            if(nums[i] == 0){
                x.push_back(0);
            }
        }
        return x;
    }
};