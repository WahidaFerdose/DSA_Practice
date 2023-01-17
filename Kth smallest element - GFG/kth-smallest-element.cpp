//{ Driver Code Starts
//Initial function template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
    public:
 //User function template for C++

void heapify(int A[], int n, int i){
    int l = 2*i + 1;
    int r = 2*i + 2;
    int large = i;
    if(l < n && A[l] > A[i])
        large = l;
    if(r < n && A[r] > A[large])
        large = r;
    if(large != i){
        swap(A[i], A[large]);
        heapify(A, n, large);
    }
}

void buildHeap(int A[], int n){
    for(int i=(n/2)-1;i>=0;i--)
        heapify(A, n, i);
}


int heapSort(int A[], int n, int k){
    buildHeap(A, n);
    for(int i=n-1;i>=0;i--){
        if(i == k-1)
            return A[0];
        swap(A[0], A[i]);
        heapify(A, i, 0);
    }
    return 0;
}

// arr : given array
// l : starting index of the array i.e 0
// r : ending index of the array i.e size-1
// k : find kth smallest element and return using this function
int kthSmallest(int A[], int l, int r, int k) {
    int n = r+1;
    heapSort(A, n, k);
}
 
};

//{ Driver Code Starts.
 
int main()
{
    int test_case;
    cin>>test_case;
    while(test_case--)
    {
        int number_of_elements;
        cin>>number_of_elements;
        int a[number_of_elements];
        
        for(int i=0;i<number_of_elements;i++)
            cin>>a[i];
            
        int k;
        cin>>k;
        Solution ob;
        cout<<ob.kthSmallest(a, 0, number_of_elements-1, k)<<endl;
    }
    return 0;
}
// } Driver Code Ends