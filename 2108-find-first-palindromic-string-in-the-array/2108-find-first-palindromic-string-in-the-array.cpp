class Solution {
public:
    bool checkpalidrome(string s)
    {
        int n = s.size();
        if (n%2==0)
        {
            int j=n/2;
            int i= j-1;
            while(i>=0 && j<=n)
            {
                if(s[i]!=s[j])
                    return false;
                i--;
                j++;
            }
        }
        else
        {
            int i=n/2;
            int j= i;
            while(i>=0 && j<=n)
            {
                if(s[i]!=s[j])
                    return false;
                i--;
                j++;
            }
        }
        return true;
    }
    string firstPalindrome(vector<string>& words) {
        for(string s: words)
        {
            if(checkpalidrome(s))
                return s;
        }
        return "";
    }
};