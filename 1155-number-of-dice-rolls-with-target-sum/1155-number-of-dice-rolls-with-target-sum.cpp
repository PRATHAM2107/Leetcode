class Solution {
public:
//     long long solve( int n, int target, int k, vector<vector<long long>> &dp)
//     {
//         if(n==-1 && target==0)
//             return 1;
//         if(n<0 && target!=0)
//             return 0;
 
        
//         if(dp[n][target]!=-1)
//         {
//             return dp[n][target];
//         }
        
//         long long total=0;
//         for(int i=1; i<=k; i++)
//         {
//             total+= solve(n-1, target-i, k, dp);
//         }
        
//         return dp[n][target]= total;
        
//     }
    int numRollsToTarget(int n, int k, int target) {
    //     vector<vector<long long>> dp(n+1,vector<long long> (target+1, -1));
    //    long long ans= solve(n-1, target, k, dp);
    //     long long mod=1e9+7;
    //     return (int)(ans%mod);
        
    const int MOD = 1e9 + 7;
    vector<vector<int>> dp(n + 1, vector<int>(target + 1, 0));
    dp[0][0] = 1;

    for (int i = 1; i <= n; ++i) {
        for (int t = 1; t <= target; ++t) {
            for (int p = 1; p <= k; ++p) {
                if (t >= p) {
                    dp[i][t] = (dp[i][t] + dp[i - 1][t - p]) % MOD;
                }
            }
        }
    }

    return dp[n][target];

            
    }
};