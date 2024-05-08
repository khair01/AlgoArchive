class Solution {
public:
    int addedInteger(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        int x = nums1[nums1.size()-1];
        int y = nums2[nums2.size()-1];
         return y - x;
        
    }
};