class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length())
            return 0;
        vector<int> mp(26,0); 
        
        
        for(int i=0; i<s.size(); i++)
        {
            mp[s[i]-'a']++;
            mp[t[i]-'a']--;
        }
            
        
        for(auto i: mp)
        {
            if(i>0)
                return false;
        }
        
        return true;
    }
};