//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
    bool isDigit(char ch){
    return ch >= '0' && ch <= '9';
  }
  
    int con(int i,int l,int a, string &s)
    {
        
        if(i==l)
        {
            return a;
        }
       
        if(isDigit(s[i]))
        {
            int c=s[i]-48;
            a=(a*10)+c;
        }
        else
        {
            return -1;
        }
    
    
        con(i+1,l,a,s);
        
    }
  public:
    /*You are required to complete this method */
    int atoi(string str) {
        
        int l=str.size();
        int a=0;
        if(l==0)
        {
            return 0;
        }
        
        int i=0;
        bool isNegative;
        if(i<l)
        {
            if(str[i]=='-')
            {
                isNegative=true;
                ++i;
                
            }
        }
        
        
        int ans=con(i,l,a,str);
        
        if(isNegative && ans!=-1)
            return -ans;
       else
            return ans;
        
        /* ss<<str;
        ss>>a'
        */
        
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		Solution ob;
		cout<<ob.atoi(s)<<endl;
	}
}
// } Driver Code Ends