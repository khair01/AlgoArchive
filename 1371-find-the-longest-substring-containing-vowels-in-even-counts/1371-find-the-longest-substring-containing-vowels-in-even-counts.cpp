class Solution {
public:
    int findTheLongestSubstring(string s) {
        unordered_map<string,int>map;

        vector<int>count(5,0); // a e i o u

        string curr = "00000";

        map[curr] = -1;
        // int result = INT_MIN; // this will not pass an edge case of "a"
        int result =  0;

        for(int i = 0 ; i < s.size() ; i++){

            if(s[i] == 'a'){
                count[0] = (count[0] + 1) % 2;
            }
            if(s[i] == 'e'){
                count[1] = (count[1] + 1) % 2;
            }
            if(s[i] == 'i'){
                count[2] = (count[2] + 1) % 2;
            }
            if(s[i] == 'o'){
                count[3] = (count[3] + 1) % 2;
            }
            if(s[i] == 'u'){
                count[4] = (count[4] + 1) % 2;
            }

            curr = "";

            for(int j = 0 ;  j < 5 ; j++){
                curr += to_string(count[j]);
            }

            if(map.find(curr)  != map.end()){
                result = max(result, i-map[curr]);
            }
            else
            {
                map[curr] = i;
            }
        }

        return result;
    }

};