                }
                string curr = s.substr(i, j - i + 1);
                if (st.count(curr)) {
                    dp[i] = min(dp[i], dp[j + 1]);
            dp[i] = 1 + dp[i + 1];

            for (int j = i; j < n; j++) {
        dp[n] = 0;

        for (int i = n - 1; i >= 0; i--) {
"
"leetscode"
["leet","code","leetcode"]
"sayhelloworld"
["hello","world"]
1
3
1
3
