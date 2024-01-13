class Solution {
public:
    int minSteps(string s, string t) {
        vector<int> v(26,0);
        
        for(char ch: s)
            v[ch-'a']++;
        
        for(char ch: t)
            v[ch-'a']--;
        
        int ans=0;
        
        for(int i: v)
            ans+=(abs(i));
  
        return ans/2;
    }
};