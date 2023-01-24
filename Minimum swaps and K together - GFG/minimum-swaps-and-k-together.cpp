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
     int cnt=0;
        
        for(int i=0;i<n;i++){
            if(arr[i]<=k)cnt++;
        }
       
        
        int j=cnt-1,i=0,ans=0;
        
        
        for(int l=i;l<=j;l++){
            if(arr[l] > k ){
                ans++;
            }
        }
        
        int mn_ans=ans;
        
        
        i++;j++;
        
        while(j<n){
            
            // int tans=ans;
            
            if(arr[i-1] > k )ans--;
            if(arr[j] > k )ans++;
            
            // mn_ans=min(min(tans,ans),mn_ans);
            mn_ans=min(mn_ans,ans);
            // ans=tans;
            
            i++;j++;
        }
        
        
        return mn_ans;
       
    
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