class Solution {
public:
    int appendCharacters(string s, string t) {
        int i=0, j=0, n = s.size(), m= t.size(), count=0, maxcnt=0;
        while(j<n)
        {
            if(i<m && s[j]==t[i])
            {
                i++;
            }
           
            j++;
            
        }
        return m-i;
    }
};