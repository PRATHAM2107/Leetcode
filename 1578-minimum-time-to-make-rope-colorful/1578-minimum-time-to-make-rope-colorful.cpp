class Solution {
public:
    int minCost(string colorSequence, vector<int>& timeRequired) {
        int n = colorSequence.size();
        char previousColor = 'A';
        int previousTime = 0;
        int currentCost, previousCost;
        currentCost = previousCost = 0;

        // Dynamic programming loop
        for (int i = 1; i <= n; i++) {
            if (colorSequence[i - 1] == previousColor) {
                // If the current color is the same as the previous one, update currentCost and previousTime
                currentCost = previousCost + min(timeRequired[i - 1], previousTime);
                previousTime = max(timeRequired[i - 1], previousTime);
            } else {
                // If the current color is different, update currentCost, previousColor, and previousTime
                currentCost = previousCost;
                previousColor = colorSequence[i - 1];
                previousTime = timeRequired[i - 1];
            }
            previousCost = currentCost;
        }

        // Return the final result
        return previousCost;
    }
};
