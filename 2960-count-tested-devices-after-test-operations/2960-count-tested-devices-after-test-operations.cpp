class Solution {
public:
    int countTestedDevices(vector<int>& batteryPercentages) {
        int n=batteryPercentages.size();
        int count=0;
        for(int i=0; i<n; i++)
        {
            if(batteryPercentages[i]-count>0)
            {
                count++;
            }
        }
        
        return count;
    }
};