class Solution {
    void solve(int n, vector<vector<int>> &ans,vector<int> &op, int ind,int k)
    {
        if(n==0 && k==0)
        {
            ans.push_back(op);
            return;
        }
        
        
        for(int i=ind;i<10;i++)
        {
            if(i>n)
                break;
            
            op.push_back(i);
            solve(n-i,ans,op,i+1,k-1);
            op.pop_back();
            
            
        }
    }
public:
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> ans;
        vector<int> op;
        solve(n,ans,op,1,k);
        return ans;
    }
};