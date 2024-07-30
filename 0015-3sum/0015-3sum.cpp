class Solution {
public:

    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result;
        int n = nums.size();
        sort(nums.begin(), nums.end());
        
        for (int i = 0; i < n - 2; ++i) {
            if (i > 0 && nums[i] == nums[i - 1]) continue;
            
            int left = i + 1;
            int right = n - 1;
            
            while (left < right) {
                int sum = nums[i] + nums[left] + nums[right];
                
                if (sum == 0) {
                    result.push_back({nums[i], nums[left], nums[right]});
                    
                    while (left < right && nums[left] == nums[left + 1]) ++left;
                    while (left < right && nums[right] == nums[right - 1]) --right;
                    
                    ++left;
                    --right;
                } else if (sum < 0) {
                    ++left;
                } else {
                    --right;
                }
            }
        }
        
        return result;
    }
};

    // vector<vector<int>> threeSum(vector<int>& nums) {
    //     vector<vector<int>> result;
    //     int n = nums.size();
    
    //     sort(nums.begin(), nums.end());

    //     for (int i = 0; i < n - 2; ++i) {
    //         if (i > 0 && nums[i] == nums[i - 1]) continue;
            
    //         unordered_set<int> seen;
    //         for (int j = i + 1; j < n; ++j) {
    //             int complement = -nums[i] - nums[j];
                
    //             if (seen.find(complement) != seen.end()) {
    //                 result.push_back({nums[i], nums[j], complement});
                    
    //                 while (j + 1 < n && nums[j] == nums[j + 1]) ++j;
    //             }
                
    //             seen.insert(nums[j]);
    //         }
    //     }
        
    //     return result;
    // }