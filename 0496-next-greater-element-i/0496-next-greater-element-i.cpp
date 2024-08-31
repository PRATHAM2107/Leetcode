class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int> s;
        unordered_map<int, int> mp;
        for(int i=0; i<nums2.size(); i++)
        {
            while(!s.empty() && s.top()<nums2[i])
            {
                mp[s.top()]= nums2[i];
                s.pop();
            }
            s.push(nums2[i]);
        }
        vector<int> ans;
        for(int i=0; i<nums1.size(); i++)
        {
            if(!mp[nums1[i]])
                ans.push_back(-1);
            else
                ans.push_back(mp[nums1[i]]);
        }
        return ans;
    }
};