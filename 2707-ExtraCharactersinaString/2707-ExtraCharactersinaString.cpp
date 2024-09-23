            return 0;
        }

        if(dp[i] != -1) {
            return dp[i];
        }

        int result = 1 + solve(i+1, s, st, n);

        for(int j = i; j < n; j++) {
            string curr = s.substr(i, j-i+1);
            if(st.count(curr)) {
                result = min(result, solve(j+1, s, st, n));
            }
        }

    int dp[51];
    int solve(int i, string& s, unordered_set<string>& st, int &n) {
        if(i >= n) {
class Solution {
public:
"
"leetscode"
["leet","code","leetcode"]
"sayhelloworld"
["hello","world"]
1
3
1
3
