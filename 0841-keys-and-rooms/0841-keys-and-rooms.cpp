class Solution {
public:
       void dfs(vector<vector<int>> &graph, int cur, vector<bool> &vis){
        vis[cur] = true;
        for(int i = 0; i < graph[cur].size(); i++){
            if(!vis[graph[cur][i]]){
                dfs(graph, graph[cur][i], vis);
            }
        }
    }

    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int i, n=rooms.size();
        vector<bool> vis(n, false);
        dfs(rooms, 0, vis);
        for(i = 0; i < n; i++){
            if(!vis[i]){
                return false;
            }
        }
        return true;
    }
};