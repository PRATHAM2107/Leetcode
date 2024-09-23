class Solution {
public:
    int dp[51];
    int solve(int i, string& s, unordered_set<string>& st, int &n) {
        if(i >= n) {
            return 0;
        }

        if(dp[i] != -1) {
            return dp[i];
        }

        int result = 1 + solve(i+1, s, st, n);

        for(int j = i; j < n; j++) {
            string curr = s.substr(i, j-i+1);
            if(st.count(curr)) {
                result = min(result, solve(j+1, s, st, n));
            }
        }

        return dp[i] = result;
    }

    int minExtraChar(string s, vector<string>& dict) {
        int n = s.length();
        memset(dp, -1, sizeof(dp));
        unordered_set<string> st(begin(dict), end(dict));

        return solve(0, s, st, n);
    }
};