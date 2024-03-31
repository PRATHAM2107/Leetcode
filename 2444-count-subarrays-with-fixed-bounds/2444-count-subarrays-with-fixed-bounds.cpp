class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        long long ans=0;
        int minkpos=-1,maxkpos=-1, lb=-1;
         for(int i = 0; i < nums.size(); i++) {
            
            if(nums[i] < minK || nums[i] > maxK)
                lb = i;
            
            if(nums[i] == minK)
                minkpos = i;
            if(nums[i] == maxK)
                maxkpos = i;
            
            int count = min(maxkpos, minkpos) - lb;
            
            ans += (count <= 0) ? 0 : count;
            
        }
        return ans;
    }
};