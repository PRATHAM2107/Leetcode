class Solution {
public:
    //   int nthUglyNumberRecursive(vector<int>& dp, int n, int i, int p1, int p2, int p3) {
    //     if (i == n) {
    //         return dp[n - 1];
    //     }

    //     int twoMultiple = dp[p1] * 2;
    //     int threeMultiple = dp[p2] * 3;
    //     int fiveMultiple = dp[p3] * 5;

    //     dp[i] = min(twoMultiple, min(threeMultiple, fiveMultiple));

    //     int nextP1 = (dp[i] == twoMultiple) ? p1 + 1 : p1;
    //     int nextP2 = (dp[i] == threeMultiple) ? p2 + 1 : p2;
    //     int nextP3 = (dp[i] == fiveMultiple) ? p3 + 1 : p3;

    //     return nthUglyNumberRecursive(dp, n, i + 1, nextP1, nextP2, nextP3);
    // }

    int nthUglyNumber(int n) {
        if(n <= 0) return 0;
        if(n == 1) return 1; 
        int t2 = 0, t3 = 0, t5 = 0; 
        vector<int> k(n);
        k[0] = 1;
        for(int i  = 1; i < n ; i ++)
        {
            k[i] = min(k[t2]*2,min(k[t3]*3,k[t5]*5));
            if(k[i] == k[t2]*2) t2++; 
            if(k[i] == k[t3]*3) t3++;
            if(k[i] == k[t5]*5) t5++;
        }
        return k[n-1];
    }
  

};