class Solution {
public:
    bool hasCommon(string &s1, string& s2) {
        int arr[26] = {0};
        
        for(char &ch : s1) {
            if(arr[ch-'a'] > 0)
                return true;
            arr[ch-'a']++;
        }
        
        for(char &ch : s2) {
            if(arr[ch-'a'] > 0)
                return true;
        }
        
        return false;
    }
    
    int solve(int idx, vector<string>& arr, string temp, int n) {
        if(idx >= n)
            return temp.length();
        
        int include = 0;
        int exclude = 0;
        if(hasCommon(arr[idx], temp)) {
            exclude = solve(idx+1, arr, temp, n);
        } else {
            exclude = solve(idx+1, arr, temp, n);
            temp += arr[idx];
            include = solve(idx+1, arr, temp, n);
            temp.pop_back(); // Backtrack to remove the last character
        }
        
        return max(include, exclude);
    }
    
    int maxLength(vector<string>& arr) {
        string temp = "";
        int n = arr.size();
        
        return solve(0, arr, temp, n);
    }
};
