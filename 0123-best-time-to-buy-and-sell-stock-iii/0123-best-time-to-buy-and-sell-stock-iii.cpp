class Solution {
public:
    int maxProfit(vector<int>& prices) {
       
        int n=prices.size();
       
        
        
        vector<int> l;
    l.assign(n, 0);
        vector<int> r;
    r.assign(n, 0);
        
        int ma,mi;
        
        mi=prices[0];
        ma=prices[n-1];
            
   

        for(int i=1;i<n;i++)
        {
            mi=min(mi,prices[i]);
            l[i]=max(l[i-1],prices[i]-mi);
        }


        for(int j=n-2;j>=0;j--)
        {
            ma=max(ma,prices[j]);
            r[j]=max(r[j+1],ma-prices[j]);
           
        }

        int profit=0;
 
        for(int i=0;i<n;i++)
        {
            profit=max(profit,l[i]+r[i]);

        }

        return profit;
        
    }
};