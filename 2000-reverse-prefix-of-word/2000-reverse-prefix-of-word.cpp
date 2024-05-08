class Solution {
public:
    string reversePrefix(string word, char ch) {
        
        int occurence = -1;
        for(int i = 0 ; i < word.size() ; i++){
            if(word[i] == ch){
                occurence = i;
                break;
            }
        }
        if(occurence == -1){
            return word;
        }

        int start = 0;
        int end = occurence;
        while(start < end){
            swap(word[start],word[end]);
            start++;
            end--;
        }
        return word;
    }
};