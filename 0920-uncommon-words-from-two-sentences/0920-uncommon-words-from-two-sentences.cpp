class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        
        
        map<string, int>map1;
        stringstream ss1(s1);
        string token;
        while (ss1 >> token) {
            map1[token]++;
        }

       
        stringstream ss2(s2);
        while (ss2 >> token) {
            map1[token]++;
        }

        vector<string> ans;
        for(auto i: map1){
            if(i.second == 1){
                ans.push_back(i.first);
            }
        }


        return ans;
    }
};