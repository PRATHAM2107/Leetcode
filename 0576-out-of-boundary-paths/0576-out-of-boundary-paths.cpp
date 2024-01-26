class Solution {
public:
int MOD= 1e9+7;
int dp[51][51][51];
int solve(int m, int n, int moves, int i, int j)
{
    if(moves < 0)
        return 0;
    
    if(i<0 || i>=m|| j<0|| j>=n)
    {
        return 1;
    }
    if(dp[moves][i][j]!=-1)
        return dp[moves][i][j]%MOD;

    int up= solve(m, n, moves-1, i-1, j)%MOD;
    int down= (up+solve(m, n, moves-1, i+1, j))%MOD;
    int left= (down+solve(m, n, moves-1, i, j-1))%MOD;
    int right= (left+solve(m, n, moves-1, i, j+1))%MOD;

    return dp[moves][i][j]=  right%MOD;
}
    int findPaths(int m, int n, int maxMove, int startRow, int startColumn) {
        
        memset(dp,-1, sizeof(dp));

        return solve(m, n, maxMove, startRow, startColumn);
    }
};