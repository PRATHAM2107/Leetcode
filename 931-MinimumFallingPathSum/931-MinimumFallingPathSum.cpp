        for (int j = 0; j < m; ++j) {
            dp[0][j] = matrix[0][j];
        }
        
        vector<vector<int>> dp(n, vector<int>(m, 0));

        // Initialize the bottom row of dp with the values from matrix
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
         int n = matrix.size();
        int m = matrix[0].size();
[
