class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        // edge case
        if(strs.size() == 1)
        {
            return strs[0];
        }
        string s1 = strs[0];
        string s2 = strs[1];

        int i = 0 , j = 0;

        string ans = "";
        while(i < s1.size() && j  < s2.size())
        {
            if(s1[i] == s2[i])
            {
                ans += s1[i];
            }
            else
            {
                break;
            }
            i ++; j++;
        }
        
        if(ans == "") return ans;
        // ab aage dekhte hain

        for(int k = 2 ; k < strs.size() ; k++)
        {
            string newans = "";
            string v = strs[k];
            int i = 0 , j = 0;
            while(i < v.size() && j  < ans.size())
            {
                if(v[i] == ans[j])
                {
                    newans += v[i];
                }
                else
                {
                    break;
                }
                i ++; j++;
            }

            ans = newans;
    
        }
        return ans;
    }
};