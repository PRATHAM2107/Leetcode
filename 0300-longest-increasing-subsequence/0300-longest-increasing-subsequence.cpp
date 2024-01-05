class Solution {
public:
    int solve(int i, int pre,  vector<int>& nums, vector<int>& dp)
    {
        if(i >= size(nums)) 
            return 0;  

        if(dp[pre+1]!=-1)
            return dp[pre+1];

        int take = 0, dontTake = solve( i + 1, pre, nums, dp);           
        if(pre==-1 || nums[i] >nums[pre] ) 
            take = 1 + solve( i + 1, i, nums, dp);   
        return dp[pre+1]= max(take, dontTake);    
    }

    int lengthOfLIS(vector<int>& nums) {

        vector<int> dp(nums.size()+1, -1);

        return solve(0, -1,  nums, dp);
        
    }
};