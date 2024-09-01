    vector<int> frequencySort(vector<int>& nums) {
         unordered_map<int, int> count;
        for (int a: nums)
            count[a]++;
        sort(begin(nums), end(nums), [&](int a, int b) {
            return count[a] == count[b] ? a > b : count[a] < count[b];
        });
        return nums;
    }
};
[
[1,1,2,2,2,3]
[2,3,1,3,2]
[-1,1,-6,4,5,-6,1,4,1]
[3,1,1,2,2,2]
[1,3,3,2,2]
[5,-1,4,4,-6,-6,1,1,1]
[3,1,1,2,2,2]
[1,3,3,2,2]
[5,-1,4,4,-6,-6,1,1,1]
