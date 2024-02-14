class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> res(nums.size(),0);
        int i=0, j=1;
        for(int x: nums)
        {
            if(x>=0)
            {
                res[i]=x;
                i+=2;
            }
            else
            {
                res[j]=x;
                j+=2;
            }

        }
        return res;
    }
};