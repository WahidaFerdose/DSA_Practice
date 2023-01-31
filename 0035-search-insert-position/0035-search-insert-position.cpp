class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        
        int n=nums.size();
        
        int l=0,h=n-1;
        int m;
        int p=0;
        
        while(l<=h)
        {
            m=(l+h)/2;
            
            if(nums[m]==target)
            {
                p++;
                return m;
            }
            
            else if(nums[m]<target)
            {
                l=m+1;
            }
            else
            {
                h=m-1;
            }
            
        }
        
        cout<<m;
        
        int q;
        
        if(p==0)
        {
        if(target<nums[m])
            q=m;
        else
            q=m+1;
            
            }
        
        
        return q;
        
        
        
    }
};