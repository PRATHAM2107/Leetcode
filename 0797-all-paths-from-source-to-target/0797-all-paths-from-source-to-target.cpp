class Solution {
public:
    void dfs(vector<vector<int>>& graph, vector<vector<int>>& allpaths, vector<int>& path, int cur) {
        path.push_back(cur);
        if (cur == graph.size() - 1)
            allpaths.push_back(path);
        else for (auto it: graph[cur])
            dfs(graph, allpaths, path, it);
        path.pop_back();
    }


    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vector<vector<int>> allpaths;
        vector<int> path;
        dfs(graph, allpaths, path, 0);
        return allpaths;
    }
};