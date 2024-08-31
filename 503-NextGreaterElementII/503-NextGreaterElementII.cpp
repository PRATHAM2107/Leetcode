            }
            if (i < n && !st.empty()) {
                ans[i % n] = st.top();
            }
            st.push(nums[i % n]);
        }
                st.pop();
            while (!st.empty() && st.top() <= nums[i % n]) {
        for (int i = n * 2 - 1; i >= 0; i--) {
        vector<int> ans(n, -1);
        int n = nums.size();
        stack<int> st;
    vector<int> nextGreaterElements(vector<int>& nums) {
[
[1,2,1]
[1,2,3,4,3]
[2,-1,2]
[2,3,4,-1,4]
[2,-1,2]
[2,3,4,-1,4]
