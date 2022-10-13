//{ Driver Code Starts
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;



/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}


// } Driver Code Ends
class Solution
{
    public:
    void merge(int arr[], int l, int m, int r)
    {
        int temp[100000];
        int i=l;
        int j=m+1;
        int f=l;
        
        while(i<=m && j<=r)
        {
            if(arr[i]<arr[j])
            {
                temp[f]=arr[i];
                i++;
            }
            else
            {
                temp[f]=arr[j];
                j++;
            }
            f++;
        }
        
        
        if(i>m)
        {
            while(j<=r)
            {
                temp[f]=arr[j];
                f++;
                j++;
            }
        }
        
        else
        {
            while(i<=m)
            {
                temp[f]=arr[i];
                f++;
                i++;
            }
        }
        
        
        
        for(int k=l;k<=r;k++)
        {
            arr[k]=temp[k];
        }
        
        
         
    }
    public:
    void mergeSort(int arr[], int l, int r)
    {
        int m;
        m=(l+r)/2;
        if(l<r)
        {
            mergeSort(arr,l,m);
            mergeSort(arr,m+1,r);
            merge(arr,l,m,r);
        }
    }
};

//{ Driver Code Starts.


int main()
{
    int n,T,i;

    scanf("%d",&T);

    while(T--){
    
    scanf("%d",&n);
    int arr[n+1];
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);

    Solution ob;
    ob.mergeSort(arr, 0, n-1);
    printArray(arr, n);
    }
    return 0;
}
// } Driver Code Ends