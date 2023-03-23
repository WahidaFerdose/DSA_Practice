class Solution {
      void solve(vector<vector<int>> &ans,vector<int> &nums, int ind)
    {
          if(ind==nums.size())
          {
              ans.push_back(nums);
              return;
          }
          
          for(int i=ind;i<nums.size();i++)
          {
              swap(nums[ind],nums[i]);
              solve(ans,nums,ind+1);
              swap(nums[ind],nums[i]);  
          }
      
      }
    public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        solve(ans,nums,0);
        return ans;
    }
  };
    
  /*  
  Extra Space
  void solve(vector<vector<int>> &ans, vector<int> &op,vector<int> &nums, int freq[])
    {
        if(op.size()==nums.size())
        {
            ans.push_back(op);
            return;
        }
        
        for(int i=0 ;i<nums.size();i++)
        {
         

            if(freq[i]==0)
            {
                op.push_back(nums[i]);
                freq[i]=1;
                solve(ans,op,nums,freq);
                freq[i]=0;
                op.pop_back();
            }
        }
    }
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> op;
        int freq[nums.size()];
        for(int i=0;i<nums.size();i++)
        {
            freq[i]=0;
        }
        solve(ans,op,nums,freq);
        return ans;
        
        
    }*/
