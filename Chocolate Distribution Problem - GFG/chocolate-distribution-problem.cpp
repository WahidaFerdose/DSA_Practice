//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
        
        sort(a.begin(),a.end());
        int low=0;
        int high=m-1;
        int mi=INT_MAX;
        int ans=0;
        
        while(high<n)
        {
            ans=a[high]-a[low];
            if(ans<mi)
            {
                mi=ans;
                high++;
                low++;
            }
            else
            {
                high++;
                low++;
                
            }
            
        }
        
        
        return mi;

    
    }   
};

//{ Driver Code Starts.
int main() {
	long long t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		vector<long long> a;
		long long x;
		for(long long i=0;i<n;i++)
		{
			cin>>x;
			a.push_back(x);
		}
		
		long long m;
		cin>>m;
		Solution ob;
		cout<<ob.findMinDiff(a,n,m)<<endl;
	}
	return 0;
}
// } Driver Code Ends