class Solution {
public:
    int minimumDeletions(string s) {
        int n = s.length();
        vector<int> suffix(n, 0);
        vector<int> prefix(n, 0);
        int b = 0;


        for (int i = 0; i < n; i++) {
            prefix[i] = b;
            if (s[i] == 'b') b++;
        }

        int a = 0;
        
        for (int i = n - 1; i >= 0; i--) {
            suffix[i] = a;
            if (s[i] == 'a') a++;
        }

        int ops = n;

        for (int i = 0; i < n; i++) {
            ops = min(ops, suffix[i] + prefix[i]);
             }
        return ops ;
    }
};