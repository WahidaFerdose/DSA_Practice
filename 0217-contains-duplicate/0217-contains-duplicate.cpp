class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n=nums.size();
        
        /* Brute Force
        bool flag=false;
        
        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(nums[i]==nums[j])
                {
                    return 1;
                }
            }
            
        }
        
     
        return flag;*/
        
        
        //set approach
        
        
        /*set<int> s;
        s.insert(nums.begin(),nums.end());
        int k=s.size();
        
        
        if(n>k)
            return 1;
        else
            return 0;*/
        
       
       sort(nums.begin(),nums.end());
        
        for(int i=0;i<n-1;i++)
        {
            if(nums[i]==nums[i+1])
                return 1;
                
        }
        return 0;
        
        
    }
};