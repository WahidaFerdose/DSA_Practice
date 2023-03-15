class Solution {
    
    
    bool checkpalindrome(int i,string &S)
   {
       if(i>=S.size()/2)
       {
           return true;
       }
       
       if(S[i]!=S[S.size()-i-1])
       {
           return false;
       }
       
      return checkpalindrome(i+1,S);
      

       
   }
    
public:
    
    

    
    bool isPalindrome(string s) {
        
        string temp="";
        
        for(int i=0;i<s.length();i++) 

         {
            char c = s[i];
            int ascii = (int)c;

             if((ascii>=65 && ascii<=90) || (ascii>=97 && ascii<=122) || (ascii>=48 && ascii<=57)) 
             {

                 temp+=c;

             }


         }
        
        string s1="";
        s1=temp;
        cout<<s1;
        
        transform(s1.begin(), s1.end(), s1.begin(), ::toupper);

   /* for (int i = 0; i < s.length(); i++)
    {
         if((s[i]<=65 && s[i]>=90) || (s[i]<=97 && s[i]>=122) || (s[i]<=48 && s[i]>=57)) 
        {
            //using in-built function to erase element
            s.erase(s.begin() + i);
            i--;
        }
    }
        cout<<s;*/
         return checkpalindrome(0,s1);
    }
};