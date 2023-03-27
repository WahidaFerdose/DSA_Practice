class Solution {

public:
    string removeDuplicates(string s) {
       /*Brute Force 
        string temp="";
        int i=0;
        while( i<s.size())
        {
            if(s[i]!=s[i+1])
            {
               i++;
                
            }
            else
            {
                s.erase(i,2);
                i=0;
                
            }
        }
        
        return s;*/
        
       /* two pointer
        int i=0;
        int j;
        
        for(j=0;j<s.size();i++,j++)
        {
            s[i]=s[j];
            if(i>0 && s[i-1]==s[i])
            {
                i-=2;
            }
            
        }
        
        
        return s.substr(0,i); */
        
        string res="";
        int i=0;
        for(i=0;i<s.size();i++)
        {
            char c=s[i];
            if(res.size() && c==res.back())
            {
                res.pop_back();
            }
            else
            {
                res.push_back(c);
            }
            
        }
        
        return res;
        
    }
};