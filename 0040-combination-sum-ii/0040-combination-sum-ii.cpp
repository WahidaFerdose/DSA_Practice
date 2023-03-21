class Solution {
    void solve(vector<int>& a, int ind, int t,vector<int>& op,vector<vector<int>>& ans)
    {
      
            if(t==0)
            {
                ans.push_back(op);
                return;
               
            }
            
      
        
        for(int i=ind;i<a.size();i++)
        {
            if(i>ind && a[i]==a[i-1])
                continue;
            if(a[i]>t)
                break;
            op.push_back(a[i]);
            solve(a,i+1,t-a[i],op,ans);
            op.pop_back();
        }
        
       // solve(a,ind+1,t,op,ans);
        
        
        
        
        
    }
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>> ans;
        vector<int> op;
        solve(candidates,0,target,op,ans);
       // ans.erase(unique(ans.begin(),ans.end()),ans.end());
        
        return ans;
        
    }
};