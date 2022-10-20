class Solution {
public:
    bool isPalindrome(int x) {
        int n2,rev,rem;
		n2=x;
		rev=0;
        bool result;
        
        if(x<0)
            result=false;
        
        
        else
        {
		    while(x!=0)
		    {
		        rem=x%10;
		        x=x/10;
		        if((rev>INT_MAX/10) || (rev==INT_MAX/10 && rem>7)) return 0;
		        if (rev < INT_MIN/10 || (rev == INT_MIN / 10 && rem < -8)) return 0;
		        rev=rev*10+rem;
		        
		    }
		    
		    
		  if(rev==n2)
		  {
		      result=true;
		  }
		  else
		  {
		      result=false;
		  }
            
        }
        return result;
    }
		   
};