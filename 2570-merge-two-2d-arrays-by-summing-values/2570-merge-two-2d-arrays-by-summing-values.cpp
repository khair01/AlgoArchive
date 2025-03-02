class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {

        int i = 0; int j = 0;
        vector<vector<int>>result;
    
        while(i < nums1.size() && j < nums2.size()){

            pair<int,int>ans1 = {nums1[i][0] , nums1[i][1]};
            pair<int,int>ans2 = {nums2[j][0] , nums2[j][1]};

            if(ans1.first < ans2.first){

                result.push_back({ans1.first, ans1.second});
                i++;
               
            }
            else if(ans1.first > ans2.first){

                result.push_back({ans2.first, ans2.second});
                j++;
                
            }
            else
            {
                result.push_back({ans1.first, ans1.second + ans2.second});
                i++; j++;
            }

            
        }

        while(i < nums1.size()){
            pair<int,int>ans1 = {nums1[i][0] , nums1[i][1]};
            result.push_back({ans1.first, ans1.second});
            i++;
        }

        while(j < nums2.size()){
            pair<int,int>ans2 = {nums2[j][0] , nums2[j][1]};
            result.push_back({ans2.first, ans2.second});
            j++;
        }

        return result;   

    }
};