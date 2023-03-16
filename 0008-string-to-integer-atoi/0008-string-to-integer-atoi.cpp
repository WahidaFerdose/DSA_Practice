class Solution {
    
    
    bool isDigit(char ch){
    return ch >= '0' && ch <= '9';
  }
public:
  int myAtoi(string s) {
      
      int l=s.size();
      int i=0;
      if(l==0)
      {
          return 0;
      }

      
          int ans=0;
          while(i<l && (s[i]<=48 && s[i]>=57))
          {
              return ans;
          }

      
   while(i < l && s[i] == ' '){
        ++i;
    }
      
      bool isNegative;
      
      if(i<l)
      {
          if(s[i]=='-')
          {
              isNegative=true;
              ++i;
          }
          else if(s[i]=='+')
          {
              isNegative=false;
              ++i;
          }
          
      }
      
      
      

      if(!isDigit(s[i]))
      {
          return 0;
      }
  
      
      while(i<l && isDigit(s[i]))
      {
          int c=s[i]-'0';
         
              if(ans>(INT_MAX/10) || (ans==(INT_MAX/10) && c>7))
                 {
                     if(isNegative)
                     {
                         return INT_MIN;
                     }
                     else
                     {
                         return INT_MAX;
                     }
                 }
              ans=ans*10;
              ans=ans+c;

          
          
          ++i;
          
      }
      
      if(isNegative)
          return -ans;
      else
          return ans;
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
  }
};