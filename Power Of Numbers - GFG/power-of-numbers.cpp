//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
# define mod 1000000007

// } Driver Code Ends
class Solution{
    public:
    //You need to complete this fucntion
    
    long long power(int x,int n)
    {
 if(n==0 || x==1)
            return 1;
        
        if(n==1)
            return x;
        if(x==-1)
        {
            if(n%2==0)
                return 1;
            else
                return -1;
        }

        int k;
        k=n;
  
       // cout<<"k: "<<k;
       // cout<<endl;
        
        
        
        long long ans=power(x,k/2);
        ans=ans*ans%1000000007;
      
        if(n%2==0)
         return ans;
        else
            return (ans*x)%1000000007;
       // return 0;
            
        
    }

};

//{ Driver Code Starts.

// compute reverse of a number 
long long rev(long long n)
{
    long long rev_num = 0;
     while(n > 0) 
      { 
        rev_num = rev_num*10 + n%10; 
        n = n/10; 
      } 
      return rev_num;
}




int main()
{
    int T;
    cin>>T;//testcases
    
    while(T--)
    {
        long long N;
        cin>>N;//input N
        
        long long R = 0; 
        
        // reverse the given number n
        R = rev(N);
        Solution ob;
        //power of the number to it's reverse
        long long ans =ob.power(N,R);
        cout << ans<<endl;
    }
}
// } Driver Code Ends