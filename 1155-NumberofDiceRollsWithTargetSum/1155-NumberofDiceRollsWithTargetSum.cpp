        for (int t = 1; t <= target; ++t) {
            for (int p = 1; p <= k; ++p) {
                if (t >= p) {
                    dp[i][t] = (dp[i][t] + dp[i - 1][t - p]) % MOD;
                }
            }
        }
    }

    return dp[n][target];

            
    }
};
1
