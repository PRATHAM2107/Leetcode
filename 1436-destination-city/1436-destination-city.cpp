class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_set<string> startingCities;
        for(auto& it: paths)  startingCities.insert(it[0]);                        
        for(auto& it: paths) 
            if(!startingCities.count(it[1])) 
                return it[1];             
        return "";
    }
};