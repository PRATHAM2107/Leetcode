class Solution {
public:
    double maxProbability(int n, vector<vector<int>>& edges, vector<double>& succProb, int start, int end) {
        vector<pair<int,double>>adj[n];
        for(int i=0;i<edges.size();i++){
            adj[edges[i][0]].push_back({edges[i][1],succProb[i]});
            adj[edges[i][1]].push_back({edges[i][0],succProb[i]});
        }
        vector<double>prob(n,0);
        prob[start]=1;
        priority_queue<pair<double,int>>pq;
        pq.push({1,start});   //prob & node
        while(!pq.empty()){
            auto u =pq.top();
           pq.pop();
            for(auto it:adj[u.second]){
                if(u.first*it.second>prob[it.first]){
                    prob[it.first]=u.first*it.second;
                    pq.push({prob[it.first],it.first});
                }
            }
        }
        return prob[end];
    }
};