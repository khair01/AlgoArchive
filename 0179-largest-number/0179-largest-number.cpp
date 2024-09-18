class Solution {
public:
    string largestNumber(vector<int>& nums) {
        
        auto CustomSort = [](int &a , int &b){
            return (to_string(a) + to_string(b) > to_string(b) + to_string(a));
        };

        sort(begin(nums),end(nums),CustomSort);
        if(nums[0] == 0){return '0';}// an edge case
        string result = "";

        for(auto num: nums){
            result += to_string(num);
        }

        return result;
    }
};