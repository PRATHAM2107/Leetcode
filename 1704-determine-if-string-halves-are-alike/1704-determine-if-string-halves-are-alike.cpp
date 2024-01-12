class Solution {
public:
    bool isvowel(char x) 
    { 
        if (x == 'a' || x == 'e' || x == 'i' ||  
            x == 'o' || x == 'u' || x == 'A' ||  
            x == 'E' || x == 'I' || x == 'O' || x == 'U') 
                return 1;
        else
                return 0;
    } 
    bool halvesAreAlike(string s) {
        int count=0;
        for(int i=0;i<s.size();i++)
        {   
            s[i]=tolower(s[i]);
            if(i<s.size()/2)
            {
                if(isvowel(s[i]))
                      count++;                
            }
            else
            {
                if(isvowel(s[i]))
                      count--;           
            }     
        } 
       return (count==0);
    }
};