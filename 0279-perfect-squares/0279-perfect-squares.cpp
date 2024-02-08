class Solution {
public:
    vector<int> perfectSquares(int n) {
        vector<int> squares;
        for (int i = 1; i * i <= n; ++i) {
            squares.push_back(i * i);
        }
        return squares;
    }

    int solve(vector<int>& squares, vector<vector<int>>& dp, int index, int target) {
        if (target == 0) return 0;
        if (target < 0 || index < 0) return 10001;
        if (dp[index][target] != -1) return dp[index][target];

        int include = 1 + solve(squares, dp, index, target - squares[index]);
        int exclude = solve(squares, dp, index - 1, target);

        return dp[index][target] = min(include, exclude);
    }

    int numSquares(int n) {
          vector<int> squares = perfectSquares(n);
        int m = squares.size();
        vector<vector<int>> dp(m, vector<int>(n + 1, -1));
        return solve(squares, dp, m - 1, n);
        
    }
};