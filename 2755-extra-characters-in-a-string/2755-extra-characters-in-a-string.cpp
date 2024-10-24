class Solution {
public:
    int minExtraChar(string s, vector<string>& dictionary) {
        int n = s.length();
        vector<int> dp(n + 1, 0);
        unordered_set<string> st(begin(dictionary), end(dictionary));

        dp[n] = 0;

        for (int i = n - 1; i >= 0; i--) {
            dp[i] = 1 + dp[i + 1];

            for (int j = i; j < n; j++) {
                string curr = s.substr(i, j - i + 1);
                if (st.count(curr)) {
                    dp[i] = min(dp[i], dp[j + 1]);
                }
            }
        }

        return dp[0];
    }
};