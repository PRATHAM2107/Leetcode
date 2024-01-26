    }
    if(dp[moves][i][j]!=-1)
        return dp[moves][i][j]%MOD;

    int up= solve(m, n, moves-1, i-1, j)%MOD;
    int down= (up+solve(m, n, moves-1, i+1, j))%MOD;
2
