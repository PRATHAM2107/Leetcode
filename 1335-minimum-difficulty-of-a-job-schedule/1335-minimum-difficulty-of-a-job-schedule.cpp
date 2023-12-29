
// Solution 2
class Solution {
public:
    int minDifficulty(vector<int>& A, int D) {
        int n = A.size(), inf = 1e9, maxd;
        if (n < D) return -1;
        vector<int> dp(n + 1, 1e9);
        dp[n] = 0;
        for (int d = 1; d <= D; ++d) {
            for (int i = 0; i <= n - d; ++i) {
                maxd = 0, dp[i] = inf;
                for (int j = i; j <= n - d; ++j) {
                    maxd = max(maxd, A[j]);
                    dp[i] = min(dp[i], maxd + dp[j + 1]);
                }
            }
        }
        return dp[0];
    }
};


// #define INF 10000000
// class Solution {
// public:
//     int n;
//     int dp[305][15];
//     int dfs(int i,int d,vector <int> &jd)
//     {
//         if(i==n && d==0) 
//             return 0;

//         if(i==n || d==0 || n-i<d) 
//             return INF;

//         if(dp[i][d]!=-1) 
//             return dp[i][d];
            
//         int ans=INF;
//         int maxele=-INF;
//         for(int j=i;j<n;j++)
//         {   
//             maxele=max(maxele,jd[j]); //max element from i to j
//             ans=min(ans,maxele+dfs(j+1,d-1,jd)); //minimum of all possible answers
//         }
//         dp[i][d]=ans;
//         return ans;
//     }
//     int minDifficulty(vector<int>& jobDifficulty, int d) {
//         n=jobDifficulty.size();
//         if(n<d)       //not possible
//             return -1;
//         memset(dp,-1,sizeof(dp));
//         int ans= dfs(0,d,jobDifficulty);
//         return ans;
//     }
// };

