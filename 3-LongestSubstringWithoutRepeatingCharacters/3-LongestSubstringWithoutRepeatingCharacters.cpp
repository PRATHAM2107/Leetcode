        return maxLen;
    }
            v[s[i]] = i;
            maxLen = max(maxLen, i - start);
        }
    
};
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> v(256, -1);
        int maxLen = 0, start = -1;
        for (int i = 0; i != s.length(); i++) {
            if (v[s[i]] > start)
                start = v[s[i]];
"abcabcbb"
