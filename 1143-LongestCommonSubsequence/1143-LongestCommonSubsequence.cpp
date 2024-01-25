        // return longestCommonSubsequence(text1,text2,m,n,dp);

    int longestCommonSubsequence(string text1, string text2) {
        int m=text1.size(),n=text2.size();
        int dp[m+1][n+1];
        // memset(dp, -1, sizeof(dp));
            return dp[m][n]= max(longestCommonSubsequence(text1,text2,m-1,n,dp),
longestCommonSubsequence(text1,text2,m,n-1,dp));
        }
    }
    
"
