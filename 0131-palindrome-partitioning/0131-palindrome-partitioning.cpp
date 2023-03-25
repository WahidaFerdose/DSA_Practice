class Solution {
    bool isPalindrome(string s,int start,int end)
    {
        if(start==end)
        {
            return true;
        }
        
        while(start<=end)
        {
            if(s[start]==s[end])
            {
                start++;
                end--;
            }
            else
                return 0;
        }
        
        return 1;
        
    }
    void solve(string s, vector<vector<string>> &ans,vector<string> &op,int ind)
    {
        if(ind==s.size())
        {
            ans.push_back(op);
            
            return;
        }
        
        for(int i=ind;i<s.size();i++)
        {
            if(isPalindrome(s,ind,i))
            {
                op.push_back(s.substr(ind,i-ind+1));
                solve(s,ans,op,i+1);
                op.pop_back();
            }
        }
    }
public:
    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> op;
        solve(s,ans,op,0);
        return ans;
        
    }
};