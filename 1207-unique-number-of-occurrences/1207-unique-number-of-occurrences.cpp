class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
          int mp[2001] = {};
          for (auto n : arr) 
              mp[n + 1000]++;
        
          sort(begin(mp), end(mp));
        
          for (int i = 1; i < 2001; ++i)
              if (mp[i] && mp[i] == mp[i - 1]) 
                  return false;
        
          return true;
    }
};