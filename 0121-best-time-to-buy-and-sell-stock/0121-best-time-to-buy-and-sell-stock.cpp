class Solution {
public:
    int maxProfit(vector<int>& prices) {


        int pr=0,mi=INT_MAX;
        int n=prices.size();
        int maxPR=INT_MIN;

        for(int i=0;i<n;i++)
        {
            if(prices[i]<mi)
            {
                mi=prices[i];
            }

            pr=prices[i]-mi;

            if(pr>maxPR)
            {
                maxPR=pr;
            }
        }


        if(maxPR<=0)
        {
            return 0;
            
        }
        else
        {
            return maxPR;
        }
    }

};