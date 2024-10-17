class Solution {
public:
    int maximumSwap(int num) {
        string temp= to_string(num);
        
        int maxidx = -1; int maxdigit = -1;
        int leftidx = -1; int rightidx = -1;        

        for (int i = temp.size() - 1; i >= 0; --i) {
            
            if (temp[i] > maxdigit) {
                maxdigit = temp[i];
                maxidx = i;
            }
            else if(temp[i] < maxdigit) {
                leftidx = i;
                rightidx = maxidx;
            }
        }
        if (leftidx == -1) 
            return num;

        swap(temp[leftidx], temp[rightidx]);

        return stoi(temp);
    }
};