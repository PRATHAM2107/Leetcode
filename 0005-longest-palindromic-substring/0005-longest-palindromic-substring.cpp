class Solution {
public:
    string ans = "";
    void expand(string &s , int left ,int right)
    {
        while(left >= 0 &&  right < s.size() && s[left] == s[right])
        {
            left--,right++;
        }
        if(ans.size() < right - left )
            ans = s.substr(left + 1 , right - left - 1);
    }
    string longestPalindrome(string s) {
        for(int i = 0 ; i < s.size() ; i++)
        {
            expand(s , i , i);
            expand(s , i , i+1);
        }
        return ans;
    }
};



/***************************************DP Approach*****************************************************/
class Solution {
public:
    string longestPalindrome(string s) {
        if (s.length() <= 1) {
            return s;
        }
        
        int max_len = 1;
        int start = 0;
        int end = 0;
        vector<vector<bool>> dp(s.length(), vector<bool>(s.length(), false));
        
        for (int i = 0; i < s.length(); ++i) {
            dp[i][i] = true;
            for (int j = 0; j < i; ++j) {
                if (s[j] == s[i] && (i - j <= 2 || dp[j + 1][i - 1])) {
                    dp[j][i] = true;
                    if (i - j + 1 > max_len) {
                        max_len = i - j + 1;
                        start = j;
                        end = i;
                    }
                }
            }
        }
        
        return s.substr(start, end - start + 1);
    }
};
