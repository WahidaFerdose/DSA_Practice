class Solution {
public:
    int fib(int n) {
      
         if(n<=1)
            return n;
        /*return fib(n-1)+fib(n-2);*/
        
        int a=0;
        int b=1;
        int ans;
        for(int i=1;i<n;i++)
        {
            ans=a+b;
            a=b;
            b=ans;
        }
        return ans;
        
    }
};