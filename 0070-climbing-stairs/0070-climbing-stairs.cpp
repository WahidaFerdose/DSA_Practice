class Solution {
public:
    int climbStairs(int n) {
        if(n==0)
            return 1;
        if(n<0)
            return 0;
        int a=0;
        int b=1;
        int ans;
        for(int i=1;i<=n;i++)
        {
            ans=a+b;
            a=b;
            b=ans;
        }
        return ans;
        
    }
};