class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        unordered_map<int,int>mp;
        for(int i=0;i<matches.size();i++)
        {
            int lose=matches[i][1];
            mp[lose]++;
        }
        
        vector<int>lost0;
        vector<int>lost1;
        for(int i=0;i<matches.size();i++)
        {
           int winner=matches[i][0];
           int looser=matches[i][1];
           if(mp.find(winner)==mp.end()) 
           {
               lost0.push_back(winner);
               mp[winner]=2;

           }
           if(mp[looser]==1)
               lost1.push_back(looser);

        }
        sort(lost0.begin(),lost0.end());    
        sort(lost1.begin(),lost1.end());

        return {lost0,lost1};

    }
};