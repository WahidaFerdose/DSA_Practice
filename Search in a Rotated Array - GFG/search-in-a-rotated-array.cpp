//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    
  /*  
    int pivot(int arr[],int l,int h)
{
    int m;
    while(l<h)
    {
        m=l+(h-l)/2;

        if(arr[m]>=arr[0])
        {
            l=m+1;
        }
        else
        {
            h=m;
        }
    }

    return l;
}

int le(int arr[],int l,int h, int k)
{
    int m;
    while(l<=h)
    {
        m=l+(h-l)/2;

        if(arr[m]==k)
        {
            return m;
        }
        else if(arr[m]>k)
        {
            h=m-1;
        }
        else
        {
            l=m+1;
        }
    }

    return -1;
}

int ri(int arr[],int l,int h, int k)
{
     int m;
    while(l<=h)
    {
        m=l+(h-l)/2;

        if(arr[m]==k)
        {
            return m;
        }
        else if(arr[m]>k)
        {
            h=m-1;
        }
        else
        {
            l=m+1;
        }
    }

    return -1;
}*/



    int search(int nums[], int l, int h, int target){
        
    /*int p;
    
    p=pivot(A,l,h);
    
    int ans;

    if(A[0]<key && key>A[p])
    {
         ans=ri(A,l,(p-1),key);
        
    }

    else
    {
       ans=le(A,p,h,key);
    }

    return ans;
    }*/
    
    
    
    int low =l , high = h; //<---step 1

  while (low <= high) { //<--- step 2
    int mid = (low + high) >> 1; //<----step 3
    if (nums[mid] == target)
      return mid; // <---step 4

    if (nums[low] <= nums[mid]) { //<---step 5
      if (nums[low] <= target && nums[mid] >= target)
        high = mid - 1; //<---step 6 
      else
        low = mid + 1; //<---step 7
    } else { //<---step 7
      if (nums[mid] <= target && target <= nums[high])
        low = mid + 1;
      else
        high = mid - 1;
    }
  }
  return -1; //<---step 8
    }
};

//{ Driver Code Starts. 
int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int A[n];
        for(int i = 0; i < n; i++)
            cin >> A[i];
        int key;
        cin >> key;
        Solution ob;
        cout << ob.search(A, 0, n - 1, key) << endl;
    }
return 0;
}
// } Driver Code Ends