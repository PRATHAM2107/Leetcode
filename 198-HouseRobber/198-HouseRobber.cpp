            int pick=nums[i], notpick=0;
        {
        for(int i=1; i<n; i++)
        
        dp[0]= nums[0];
        
        if(n==1) return nums[0];
        if(n==2) return max(nums[0], nums[1]);
        
        int n= nums.size();
        vector<int> dp(nums.size()+1, 0);
    int rob(vector<int>& nums) {
    }
        return dp[i]= max(pick, notpick);

        int notpick = 0 + solve(nums, dp, i+1);
        int pick = nums[i] + solve(nums, dp, i+2);
            if(i-2>=0) pick+=dp[i-2];
            if(i-1>=0) notpick+=dp[i-1];
            
            dp[i]= max(pick, notpick);
        }
[1,2,3,1]
