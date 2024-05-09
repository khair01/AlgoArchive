class Solution {
public:
    void helper(vector<vector<int>>&ans,vector<int>&temp , int i , vector<int> arr , int n){
        // Base Case //
        if(i >= n){
            ans.push_back(temp);
            return;
        }
        
        // Include
        temp.push_back(arr[i]);
        helper(ans,temp,i+1,arr,n);
        // Exclude
        temp.pop_back();
        helper(ans,temp,i+1,arr,n);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>temp;
        helper(ans,temp,0,nums,nums.size());
        return(ans);
    }
};
