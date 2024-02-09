            solve(i+1,nums,dp,cur);
            cur.pop_back();
        }
        else if((int)cur.size()>dp[i] && nums[i]%cur.back()==0){
            dp[i]=cur.size();
            cur.push_back(nums[i]);
            solve(i+1,nums,dp,cur);
            cur.pop_back();
        }
        solve(i+1,nums,dp, cur);
        
    }
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        int n= nums.size();
        vector<int> dp(n+1,-1);

        sort(nums.begin(), nums.end());
        vector<int> cur;
        solve(0, nums, dp, cur );
        return ans;
    }
[
