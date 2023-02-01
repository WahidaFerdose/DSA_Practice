//{ Driver Code Starts

#include <bits/stdc++.h>

using namespace std;

pair<int, int> getFloorAndCeil(int arr[], int n, int x);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        auto ans = getFloorAndCeil(arr, n, x);
        cout << ans.first << " " << ans.second << "\n";
    }
    return 0;
}

// } Driver Code Ends

int floor(int arr[], int n, int x)
{
    int c=INT_MIN,p,co=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<=x )
        {
            p=arr[i];
            if(p>=c)
            {
                c=p;
            }
        co++;
        }
        
        
    }
    if(co>0)
    return c;
    else
    return-1;
}

int ceil(int arr[], int n, int x)
{
    int c=INT_MAX;
    int p,co=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>=x )
        {
            p=arr[i];
            if(p<=c)
            {
                c=p;
            }
            co++;
        }
        
    }
    
     if(co>0)
    return c;
    else
    return-1;
}
pair<int, int> getFloorAndCeil(int arr[], int n, int x) {
    
    
   int p,q;
   p=floor(arr,n,x);
   q=ceil(arr,n,x);
   
   return {p,q};
    
}