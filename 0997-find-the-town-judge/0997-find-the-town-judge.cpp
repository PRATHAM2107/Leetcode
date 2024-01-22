class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<bool> v(n+1, 0);
        vector<int> mp(n+1, 0);
        
        for(auto x: trust)
        {
            v[x[0]]=1;
            mp[x[1]]++;
        }
        
        for(int i=1; i<=n; i++)
            if(v[i]==0 && mp[i]==n-1)
                return i;
        
        return -1;
    }
};