                            dp[l - 1][j - del] + 1 + (cnt >= 100 ? 3 : cnt >= 10 ? 2 : 
cnt >= 2 ? 1 : 0));
                    }
                }
                
                if (j > 0)
                    dp[i][j] = min(dp[i][j], dp[i - 1][j - 1]);
            }
        }
        return dp[n][k];
    }
};
"
