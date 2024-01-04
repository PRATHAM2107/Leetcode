class Solution {
public:
    int minOperations(vector<int>& nums) {
        unordered_map<int, int> mp;
        
        for(int &x: nums)
        {
            mp[x]++;
        }
        int ops=0;
        for(auto x: mp)
        {
            if(x.second==1)
                return -1;
                
            ops+= (x.second)/3;
            if(x.second%3) ops++;
            
        }
        
        return ops;
    }
};