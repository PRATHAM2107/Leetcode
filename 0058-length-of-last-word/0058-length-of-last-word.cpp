class Solution {
public:
    int lengthOfLastWord(string s) {
        int i= s.size()-1;
        while(s[i]==' ')
            i--;
        int k = i+1;
       while(i>=0 && s[i]!=' ')
       {
           i--;
       }
        return(k - (i+1));
}
};