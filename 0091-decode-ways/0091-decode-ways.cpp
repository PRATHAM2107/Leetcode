class Solution {
public:
    int solve(int i, string s, vector<int> &dp, int n)
    {
        if(i== s.size() )
            return 1;
        if(s[i]=='0')
            return 0;
        
        if(dp[i]!=-1)
                return dp[i];
        
        int singlechar=0, bothchar=0;
        singlechar+= solve(i+1, s, dp,n);
        
        if(i < n-1 && (s[i]=='1'|| (s[i]=='2'&& s[i+1]<'7')))
            bothchar+=solve(i+2, s, dp, n); 
        
        return dp[i]= singlechar+bothchar;
            
    }
    int numDecodings(string s) {
        int n= s.size();
        vector<int> dp(n+1, -1);
        
        return solve(0, s, dp, n);
    }
};