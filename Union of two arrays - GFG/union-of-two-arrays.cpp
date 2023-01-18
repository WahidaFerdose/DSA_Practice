//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template in C++

class Solution{
    public:
    //Function to return the count of number of elements in union of two arrays.
    int doUnion(int a[], int n, int b[], int m)  {
        int l=n+m;
        int c[l];
    
    	for(int i=0;i<n;i++)
        {
            c[i]=a[i];
        }
    
        int j=0;
        for(int i=n;i<l;i++)
        {
            c[i]=b[j];
            j++;
        }
    
        sort(c,c+l);
    
    
        int co=0;
    
    
        for(int i=0;i<l;i++)
        {
            if(c[i]!=c[i+1])
                co++;
            else
                continue;
    
        }
        
        return co;
        }
};

//{ Driver Code Starts.

int main() {
	
	int t;
	cin >> t;
	
	while(t--){
	    
	    int n, m;
	    cin >> n >> m;
	    int a[n], b[m];
	   
	    for(int i = 0;i<n;i++)
	       cin >> a[i];
	       
	    for(int i = 0;i<m;i++)
	       cin >> b[i];
	    Solution ob;
	    cout << ob.doUnion(a, n, b, m) << endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends