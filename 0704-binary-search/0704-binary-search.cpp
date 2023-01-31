class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        
        int l=0,h=n-1;
        int m;
        
        while(l<=h)
        {
            m=(l+h)/2;
            
            if(nums[m]==target)
            {
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
        
        return -1;
        
    }
};