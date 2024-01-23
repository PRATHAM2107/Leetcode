        int exclude = 0;
        if(hasCommon(arr[idx], temp)) {
            exclude = solve(idx+1, arr, temp, n);
        } else {
            exclude = solve(idx+1, arr, temp, n);
            temp += arr[idx];
        if(idx >= n)
            return temp.length();
        
        int include = 0;
            include = solve(idx+1, arr, temp, n);
        }
        
        return max(include, exclude);
    }
    
    int maxLength(vector<string>& arr) {
        string temp = "";
        int n = arr.size();
        
        return solve(0, arr, temp, n);
    }
};
["un","iq","ue"]
