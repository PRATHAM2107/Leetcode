class Solution {
public:
/*
    int solve(vector<int>& nums, vector<int>& dp, int i)
    {
        if(i>=nums.size())
            return 0;
        
        if(dp[i]!= -1)
            return dp[i];

        int pick = nums[i] + solve(nums, dp, i+2);
        int notpick = 0 + solve(nums, dp, i+1);

        return dp[i]= max(pick, notpick);
    }
    int rob(vector<int>& nums) {
        vector<int> dp(nums.size()+1, 0);
        int n= nums.size();
        
        if(n==1) return nums[0];
        if(n==2) return max(nums[0], nums[1]);
        
        dp[0]= nums[0];
        
        for(int i=1; i<n; i++)
        {
            int pick=nums[i], notpick=0;
            if(i-2>=0) pick+=dp[i-2];
            if(i-1>=0) notpick+=dp[i-1];
            
            dp[i]= max(pick, notpick);
        }
        return dp[n-1];
        
    }
    */
    
    int rob(vector<int>& nums) {
        if (nums.size() == 0) 
            return 0;
        int prev1 = 0;
        int prev2 = 0;
        for (int num : nums) {
            int tmp = prev1;
            prev1 = max(prev2 + num, prev1);
            prev2 = tmp;
        }
        return prev1;
        
    }
};