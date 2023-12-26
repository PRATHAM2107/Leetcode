            if (target - i >= 0) {
                total = (total + solve(n - 1, target - i, k, dp)) % MOD;
            }
        }

        return dp[n][target] = total;
    }

    int numRollsToTarget(int n, int k, int target) {
        vector<vector<int>> dp(n + 1, vector<int>(target + 1, -1));
        return solve(n , target, k, dp);
    }
};

1
