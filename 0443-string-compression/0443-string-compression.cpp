class Solution {
public:
    int compress(vector<char>& chars) {
        int n=chars.size();
        int i=0;
        int ans=0;
        
        while(i<n)
        {
            char c=chars[i];
            int count=0;
            while(i<n && c==chars[i])
            {
                i++;
                count++;
            }
            
            chars[ans++]=c;
           
            
            if(count>1)
            {
                string k=to_string(count);
                for(int m=0;m<k.size();m++)
                {
                    chars[ans++]=k[m];
                    
                }
            }
        }
        
        return ans;
        
    }
};