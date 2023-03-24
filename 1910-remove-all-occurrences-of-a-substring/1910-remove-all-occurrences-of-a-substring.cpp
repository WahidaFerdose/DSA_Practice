class Solution {
    void solve(string &s,string part)
    {
        if(s.find(part)<0 || s.find(part)>s.size())
        {
            return;
        }
        
        s.erase(s.find(part),part.size());
        
        solve(s,part);
    
    }
public:
    string removeOccurrences(string s, string part) {
     
        solve(s,part);
        return s;
        
    }
};