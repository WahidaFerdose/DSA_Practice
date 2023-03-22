class Solution {
    void solve(vector<vector<int>> &ans, vector<int> &op, vector<int> &nums, int ind){
   
       ans.push_back(op);
 
       for(int i=ind;i<nums.size();i++)
        {
            if(i>ind && nums[i]==nums[i-1])
                continue;
            op.push_back(nums[i]);
            solve(ans,op,nums,i+1);
            op.pop_back();
        }
        
        
 
        
    }
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> op;
        sort(nums.begin(),nums.end());
        solve(ans,op,nums,0);
        return ans;
        
    }
};