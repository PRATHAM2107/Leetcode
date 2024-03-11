class Solution {
public:
    string customSortString(string order, string s) {
        int count[26];
        for(char c: s)
        {
            count[c-'a']++;
        }
        string ans="";
        for(char c: order)
        {
            ans+=string(count[c-'a'], c);
            count[c-'a']=0;
        }
        
        for(int i=0; i<26; i++)
        {
            if(count[i]!=0)
            {
                ans+=string(count[i], i+'a');
            }
        }
        return ans;
    }
};