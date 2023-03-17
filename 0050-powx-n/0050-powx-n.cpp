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
        
        
        if(n==INT_MIN)
            return 0;
        int k;
        
        if(n<0)
        {
            x=1/x;
            k=n*(-1);
            
        }
        else
        {
            k=n;
        }
        
       // cout<<"k: "<<k;
       // cout<<endl;
        
        
        
        double ans=myPow(x,k/2);
        //cout<<ans<<endl;
        
        if(n%2==0)
         return ans*ans;
        else
            return x*ans*ans;
       // return 0;
            
    }
};