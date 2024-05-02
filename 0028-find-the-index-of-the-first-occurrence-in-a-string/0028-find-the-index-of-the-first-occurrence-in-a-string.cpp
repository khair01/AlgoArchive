
class Solution {
public:
    int strStr(string s, string needle) {
        if (needle.empty()) {
            return 0;
        }

        vector<int> lps = computeLPS(needle);

        int i = 0;  // index for s
        int j = 0;  // index for needle

        while (i < s.size()) {
            if (s[i] == needle[j]) {
                i++;
                j++;
                if (j == needle.size()) {
                    return i - j;  // found a match
                }
            } else {
                if (j == 0) {
                    i++;
                } else {
                    j = lps[j - 1];  // backtrack j using lps array
                }
            }
        }

        return -1;  // needle not found in s
    }

private:
    vector<int> computeLPS(string needle) {
        vector<int> lps(needle.size(), 0);
        int len = 0;  // length of the longest prefix suffix

        int i = 1;
        while (i < needle.size()) {
            if (needle[i] == needle[len]) {
                len++;
                lps[i] = len;
                i++;
            } else {
                if (len == 0) {
                    lps[i] = 0;
                    i++;
                } else {
                    len = lps[len - 1];
                }
            }
        }

        return lps;
    }
};

