class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int, int> mp;
        
        for(int i: nums)
        {
            mp[i]++;
        }
        
        int count=0, cur=-1;
        for(auto x: mp)
        {
            if(x.second>cur)
            {
                count=1;
                cur=x.second;
            }
            else if(x.second==cur)
            {
                count++;
            }
        }
        
        return count*cur;
        
    }
};