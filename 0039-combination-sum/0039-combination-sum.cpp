class Solution {
    void solve(vector<int>& a,int i, int target, vector<vector<int>>& ans,vector<int>& output)
    {
        if(i==a.size())
        {
            if(target==0)
                ans.push_back(output);
            return;
        }
        
        
        //pick element
        if(a[i]<=target)
        {
            output.push_back(a[i]);
            solve(a,i,target-a[i],ans,output);
            output.pop_back();
        }
        
        
        //not pick
        
        solve(a,i+1,target,ans,output);
        
        
        
        
    }
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        
        vector<int> output;
        vector<vector<int>> ans;
        solve(candidates,0,target,ans,output);
        return ans;
        
    }
};