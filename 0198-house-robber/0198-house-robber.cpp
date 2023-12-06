class Solution {
public:
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
        // vector<int> dp(nums.size(), -1);
        // return solve(nums, dp, 0);

        int n = nums.size();
        int pre1=0, pre2=0;
        for(int i=0; i<n; i++)
        {
            int tmp = pre1;
            pre1 = max(nums[i]+pre2, pre1);
            pre2 = tmp; 
        }
        return pre1;
    }
};