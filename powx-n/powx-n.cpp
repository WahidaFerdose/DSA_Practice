class Solution {

    
public:
    double myPow(double x, int n) {
        if(n==0 || x==1)
            return 1;
        if(n==1)
            return x;
        if(x==-1)
        {
            if(n%2==0)
                return 1;
            else
                return -1;
        }
        if(n>=INT_MAX || n<=INT_MIN)
            return 0;
            
        
        
        if(n<0)
        {
            x=1/x;
            n=-n;
        }
       
        double ans=myPow(x,n/2);
        
        ans=ans*ans;
        

        if(n%2==0)
            
            return ans;
        else
            return x*ans;
    }
};