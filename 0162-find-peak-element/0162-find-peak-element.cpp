class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        
        int a,n=nums.size();
        
        int l=0,h=n-1,m;
        
        if(n==1)
        {
            return 0;
        }
        
        while(l<h)
        {
            m=l+((h-l)/2);
            
            if(nums[m]<nums[m+1])
            {
                l=m+1;
            }
            else if(nums[m]>nums[m+1])
            {
                h=m;
            }
            
        }
        return h;
    }
};