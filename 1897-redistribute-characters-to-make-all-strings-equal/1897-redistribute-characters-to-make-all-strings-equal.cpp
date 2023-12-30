class Solution {
public:
    bool makeEqual(vector<string>& words) {
        int n= words.size();
        if (n == 1) {
            return true;
        }

        int total = 0;
        vector<int> mp(26, 0);
        for (string s : words) {
            for (char c : s) {
                mp[c - 'a']++;
                total+=1;
            }
        }


        if (total % n) 
            return false;

        
        for (int it : mp) {
            if (it % n != 0) {
                return false;
            }
        }

        return true;
    }
};