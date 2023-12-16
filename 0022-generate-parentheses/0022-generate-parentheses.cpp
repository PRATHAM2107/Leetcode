class Solution {
public:
    string solve(vector<string> &ans, string str, int n, int m, vector<vector<string>>&dp){
        //base case
      if(n==0 && m==0) {
            ans.push_back(str);
            return str;
        }
       
        if(dp[n][m]!=""){
            str+=dp[n][m];
            ans.push_back(str);
            return str;
        }
        
        if(m > 0)
            dp[n][m-1]=solve(ans, str+")", n, m-1, dp); 
        if(n > 0)
            dp[n-1][m+1]=solve(ans, str+"(", n-1, m+1, dp); 

        return "";
    }
    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        vector<vector<string>>dp(n+1,vector<string>(n+1,""));
        solve(ans, "", n, 0, dp);
        return ans;
    }
};