class Solution {
public:
    int compress(vector<char>& chars) {
        int i=0;
        int ansIndex=0;
        char c;
        
        while(i<chars.size())
        {
            int count=0;
            c=chars[i];
            while(i<chars.size() && c==chars[i])
            {
                i++;
                count++;
            }
        
        
            chars[ansIndex++]=c;
            
            if(count>1)
            {
                string k= to_string(count);  
               
               
                for(int m=0;m<k.size();m++)
                {
                    chars[ansIndex++]=k.at(m);
                }
            }
           
        }
    
        return ansIndex;
    }
};