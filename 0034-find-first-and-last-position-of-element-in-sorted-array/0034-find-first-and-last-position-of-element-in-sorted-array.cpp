class Solution {
public:
    
    
    int lefto(vector<int>& nums, int n, int k)
    {
        int l=0,h=n-1,m;
        int a,c=0;
       
        while(l<=h)
        {
            m=l+(h-l)/2;
            
            if(nums[m]==k)
            {
                a=m;
                c++;
                h=m-1;
            }
            else if(nums[m]<k)
            {
                l=m+1;
            }
            else
            {
                h=m-1;
            }
        }
        
        if(c>0)
            return a;
        else
            return -1;
    }
    
        
    int righto(vector<int>& nums, int n, int k)
    {
        int l=0,h=n-1,m;
        int a,c=0;
        while(l<=h)
        {
             m=l+(h-l)/2;
            if(nums[m]==k)
            {
                a=m;
                l=m+1;
                c++;
            }
            else if(nums[m]<k)
            {
                l=m+1;
            }
            else
            {
                h=m-1;
            }
            
        }
        
         if(c>0)
            return a;
        else
            return -1;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
       
        int n=nums.size();
        if(n==0)
        {
            return {-1,-1};
        }
        
        if(n==1 && nums[0]==target)
        {
            return {0,0};
        }
      

        int q,r;
        q=lefto(nums,n,target);
        r=righto(nums,n,target);

     
        return {q,r};
         
    }
};