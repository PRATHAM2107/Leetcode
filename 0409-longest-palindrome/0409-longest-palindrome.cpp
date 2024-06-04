class Solution {
public:
    int longestPalindrome(string s) {
        vector<int> chars( 52);
        for (int i = 0; i < s.size(); i ++) {
            char c = s[i];
            if (c >= 'a' && c<= 'z') {
                chars[c - 'a'] ++;
            }    
            else {
                chars[c - 'A' + 26] ++;
            }
        }
        int count = 0;
        for (int i = 0; i < chars.size(); i ++) {
            count += chars[i] / 2;
        }
        count = count * 2;
        return min((int)s.size(), count + 1);
    }
};