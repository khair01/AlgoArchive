class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
    
        int no_queries = queries.size();
        vector<int>arr2;
        cout << no_queries;
        int ans = 0;
        for(int i  = 0 ; i < no_queries ; i++){
            ans = arr[queries[i][0]];
            for(int j = queries[i][0] ; j < queries[i][1] ; j++){
                    ans = ans ^ arr[j + 1];
            }

            arr2.push_back(ans);
            ans = 0;
        }
        return arr2;
    }
};