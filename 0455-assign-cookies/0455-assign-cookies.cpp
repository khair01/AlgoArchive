class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        
        int count  = 0;
        for(int i = 0 ; i <g.size() ; i++){
            for(int j = 0 ; j < s.size() ; j++){
                if(s[j] >= g[i]){
                    ++count;
                    s[j] = -1;
                    g[i] = INT_MAX;
                }
            }
        }

        return ( count );
    }
};