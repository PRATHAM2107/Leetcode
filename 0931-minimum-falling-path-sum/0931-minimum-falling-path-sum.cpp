/*
class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
         int n = matrix.size();
        int m = matrix[0].size();
        
        vector<vector<int>> dp(n, vector<int>(m, 0));

        // Initialize the bottom row of dp with the values from matrix
        for (int j = 0; j < m; ++j) {
            dp[0][j] = matrix[0][j];
        }

        // Bottom-up DP
        for (int i = 1; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                int up = dp[i - 1][j];
                int ld = (j - 1 >= 0) ? dp[i - 1][j - 1] : INT_MAX;
                int rd = (j + 1 < m) ? dp[i - 1][j + 1] : INT_MAX;

                dp[i][j] = matrix[i][j] + min(up, min(ld, rd));
            }
        }

        // Find the minimum value in the last row of dp
        int ans = INT_MAX;
        for (int j = 0; j < m; ++j) {
            ans = min(ans, dp[n - 1][j]);
        }

        return ans;
    }
};
*/

class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
       
        int n=matrix.size();
        
        int m=matrix[0].size();
        
        vector<int>cur(m,0);
        vector<int>prev(m,0);
        
        for(int j=0;j<m;j++)
        {
            prev[j]=matrix[0][j]; 
        }
        
        
        
        for(int i=1;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                int ld=1e9,rd=1e9;
                
                
                int up=matrix[i][j] + prev[j];
                
                if(j-1>=0)
                    ld=matrix[i][j] + prev[j-1];
                if(j+1<m)
                    rd=matrix[i][j] + prev[j+1];
                
                cur[j] = min(up,min(ld,rd));
                
                
                
            }
            prev=cur;
        }
        
        int mini=prev[0];
        
        for(int j=1;j<m;j++)
        {
            
            mini=min(mini,prev[j]);
            
        }
        return mini;
    }
};