class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        unordered_set<int> st;
        vector<int> ans;
        int sum =0;
        for(auto v: grid)
        {
            for(auto i: v)
            {
                if(st.count(i))
                {
                    ans.push_back(i);
                }
                else
                {
                    st.insert(i);
                    sum+=i;
                }
            }
        }
        
        int n= grid.size()*grid.size();
        int total=(n*(n+1))/2;
        ans.push_back(total-sum);
        
        return ans;
        
        
    }
};