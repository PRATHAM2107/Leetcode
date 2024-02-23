class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
       vector<int> cost(n, INT_MAX);
        cost[src] = 0;
        
        for(int steps = 0; steps <= k; steps++){
            vector<int> tempCost(cost);
            for(auto flight: flights) {
                if (cost[flight[0]] != INT_MAX) {
                    tempCost[flight[1]] = min(tempCost[flight[1]], cost[flight[0]] + flight[2]);
                }
            }
            cost = tempCost;
        }
        
        return cost[dst] == INT_MAX ? -1 : cost[dst];
    }
};