class Solution {
public:
    int findMaxK(vector<int>& nums) {
        sort(nums.begin(),nums.end(),greater<int>());
        int s = 0;
        int e = nums.size()-1;
        while(s < e){
            if(nums[s] == (nums[e] * -1)){
                 return nums[s];
            }
            if(nums[s] > -nums[e]){
                s +=1;
            }
            else
            {
                e -= 1;
            }
        }
        return -1;
    }
};