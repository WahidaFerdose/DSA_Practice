class Solution {
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
        
        
    }
};