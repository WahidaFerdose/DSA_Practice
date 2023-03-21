class Solution {
      void solve(string digits,int ind,string m[],string output,vector<string> &ans)
    {
        if(ind>=digits.size())
        {
            ans.push_back(output);
            return;
        }
        
        int number=digits[ind]-48;
        string c = m[number];
        
        for(int i=0;i<c.length();i++)
        {
            output.push_back(c[i]);
            solve(digits,ind+1,m,output,ans);
            output.pop_back();
            
        }
        
    }
public:
    vector<string> letterCombinations(string digits) {
         string mapping[10] = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        vector<string> ans;
        if(digits.length()==0)
            return ans;
        string output;
        solve(digits,0,mapping,output,ans);
        return ans;
        
    }
};