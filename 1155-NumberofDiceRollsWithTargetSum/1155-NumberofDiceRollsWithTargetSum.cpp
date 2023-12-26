        int total = 0;
        }

            return dp[n][target];
        if (dp[n][target] != -1) {

        
        if (n == 0 || target <= 0) return n == target;
    int solve(int n, int target, int k, vector<vector<int>>& dp) {
        for (int i = 1; i <= k; i++) {
            total = (total + solve(n - 1, target - i, k, dp)) % MOD;
        }

    const int MOD = 1e9 + 7; // Modulo value
1
