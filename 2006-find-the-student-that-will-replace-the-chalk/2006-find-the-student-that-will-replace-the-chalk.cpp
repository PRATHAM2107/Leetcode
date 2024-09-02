class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        long long sum=0;// 1 1 1 5
        for(int i: chalk)
            sum+=i;
        long long remaining=k%sum;
        cout<<remaining<<endl;
        for(int i=0; i<chalk.size(); i++)
        {
            remaining-=chalk[i];
            if(remaining<0)
                return i;
        }
        return 0;
    }
};