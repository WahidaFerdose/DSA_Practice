class Solution {
    void solve(vector<string> &ans, string s,int c,int o,int n)
    {
        if(o==n && c==n)
        {
            ans.push_back(s);
            return;
        }
        if(o>c)
        {
            solve(ans,s + ")",c+1,o,n);
        }
        if(o<n)
        {
            solve(ans,s + "(",c,o+1,n);
        }
    }
public:
    vector<string> generateParenthesis(int n) {
        string s="";
        vector<string> ans;
        solve(ans,s,0,0,n);
        return ans;
        
    }
};