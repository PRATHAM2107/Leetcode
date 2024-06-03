    int climbStairs(int n) {
        int cur=1, pre=0, next;
        while(n--)
        {
            next=cur+pre;
            pre=cur;
            cur=next;
        }
        return cur;
2
