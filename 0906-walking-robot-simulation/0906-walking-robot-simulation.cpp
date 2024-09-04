class Solution {
public:
    int robotSim(vector<int>& commands, vector<vector<int>>& obstacles) {
        set<pair<int, int>> st;
        for(auto x : obstacles) {
            st.insert({x[0], x[1]});
        }

        int x = 0, y = 0;
        int d = 0; 
        int dist = 0;

        vector<pair<int, int>> directions = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};

        for(int i : commands) {
            if(i == -1) {  
                d = (d + 1) % 4;
            } else if(i == -2) {  
                d = (d + 3) % 4;
            } else {
                for(int j = 0; j < i; j++) {
                    int new_x = x + directions[d].first;
                    int new_y = y + directions[d].second;
                    if(st.find({new_x, new_y}) != st.end()) {
                        break;
                    }
                    x = new_x;
                    y = new_y;
                    dist = max(dist, x * x + y * y);
                }
            }
        }
        
        return dist;
    }
};