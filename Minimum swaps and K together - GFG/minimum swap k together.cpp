
//{ Driver Code Starts
// C++ program to find minimum swaps required
// to club all elements less than or equals
// to k together
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends

class Solution
{
public:
    int minSwap(int arr[], int n, int k) {

        int x=0;
        for(int i=0;i<n;i++)if(arr[i]<=k)x++;
        if(x==0 || x== 1)return 0;
        // cout<<x<<endl;
        int j=0;
        for(int i=0;i<x;i++){
            if(arr[i]<=k)j++;
        }
        int m = x-j;
        int i=0,e=x-1;
        while(e<n)
        {
           // cout<<i<<" "<<e<<" "<<j<<" "<<m<<endl;
            if(arr[i]<=k)j--;
            // cout<<j<<endl;

            i++;
            e++;if(e<n &&arr[e]<=k)j++;
            m= min(m, x-j);
            //cout<<i<<" "<<e<<" "<<j<<" "<<m<<endl<<endl;
        }
        return m;

    }
};


//{ Driver Code Starts.

// Driver code
int main() {

	int t,n,k;
	cin>>t;
	while(t--)
    {
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        cin>>k;
        Solution ob;
        cout << ob.minSwap(arr, n, k) << "\n";
    }
	return 0;
}

// } Driver Code Ends
