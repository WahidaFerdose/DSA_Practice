//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


    
int lefto(int nums[], int n, int k)
    {
        int l=0,h=n-1,m;
        int a,c=0;
       
        while(l<=h)
        {
            m=l+(h-l)/2;
            
            if(nums[m]==k)
            {
                a=m;
                c++;
                h=m-1;
            }
            else if(nums[m]<k)
            {
                l=m+1;
            }
            else
            {
                h=m-1;
            }
        }
        
        if(c>0)
            return a;
        else
            return -1;
    }
    
        
    int righto(int nums[], int n, int k)
    {
        int l=0,h=n-1,m;
        int a,c=0;
        while(l<=h)
        {
             m=l+(h-l)/2;
            if(nums[m]==k)
            {
                a=m;
                l=m+1;
                c++;
            }
            else if(nums[m]<k)
            {
                l=m+1;
            }
            else
            {
                h=m-1;
            }
            
        }
        
         if(c>0)
            return a;
        else
            return -1;
    }




vector<int> find(int arr[], int n , int x )
{
     
        if(n==0)
        {
            return {-1,-1};
        }
        
        if(n==1 && arr[0]==x)
        {
            return {0,0};
        }
        
        int q,r;
        q=lefto(arr,n,x);
        r=righto(arr,n,x);

        return {q,r};
}

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        ans=find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}



// } Driver Code Ends