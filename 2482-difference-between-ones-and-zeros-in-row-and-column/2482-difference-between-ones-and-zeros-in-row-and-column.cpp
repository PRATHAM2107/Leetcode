class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        int m = grid.size(), n= grid[0].size();
        vector<int> rows1(m), rows0(m), cols0(n), cols1(n);
        vector<vector<int>> diff(m, vector<int>(n, 0));
        for (int i = 0; i < m; ++i)
            for (int j = 0; j < n; ++j) {
                if (grid[i][j])
                {
                    rows1[i]++;
                    cols1[j]++;
                }
                else
                {
                    rows0[i]++;
                    cols0[j]++;
                }
        }
        
        for (int i = 0; i < m; ++i)
            for (int j = 0; j <n; ++j)
                    diff[i][j]=rows1[i]+cols1[j]-rows0[i]-cols0[j];
        return diff;
    }
};