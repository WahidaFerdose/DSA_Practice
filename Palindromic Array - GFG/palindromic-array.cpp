//{ Driver Code Starts
#include<iostream>
#include<string.h>
using namespace std;


// } Driver Code Ends
/*Complete the function below*/

class Solution {
public:

int palindrom(int k)
{
    int t=k,s=0,rem;
    while(t>0)
    {
        rem=t%10;
        s=s*10+rem;
        t=t/10;
        
    }
    
    if(s==k)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
    int PalinArray(int a[], int n)
    {
        int m;
    	for(int i=0;i<n;i++)
    	{
    	    m=palindrom(a[i]);
    	    if(m==0)
    	    {
    	        return 0;
    	    }
    	}
    	return 1;
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i = 0; i < n; i++)
			cin>>a[i];
		Solution obj;
		cout<<obj.PalinArray(a,n)<<endl;
	}
}
// } Driver Code Ends