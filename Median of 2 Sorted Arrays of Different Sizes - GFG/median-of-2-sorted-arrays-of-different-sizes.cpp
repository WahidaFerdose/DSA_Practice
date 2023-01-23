//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
double MedianOfArrays(vector<int>& array1, vector<int>& array2);


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    double MedianOfArrays(vector<int>& ar1, vector<int>& ar2)
    {
        int i = 0; 
    int j = 0; 
    int count;
    int m1 = -1, m2 = -1;
    
    int n=ar1.size();
        int m=ar2.size();

    for (count = 0; count <= (m + n) / 2; count++) {
        
        m2 = m1;
        if (i != n && j != m) {
            m1 = (ar1[i] > ar2[j]) ? ar2[j++] : ar1[i++];
        }
        else if (i < n) {
            m1 = ar1[i++];
        }
        // for case when j<m,
        else {
            m1 = ar2[j++];
        }
    }
    // Since there are (n+m) elements,
    // There are following two cases
    // if n+m is odd then the middle
    // index is median i.e. (m+n)/2
    // other wise median will be average of elements
    // at index ((m+n)/2 - 1) and (m+n)/2
    // in the array obtained after merging ar1 and ar2
    if ((m + n) % 2 == 1) {
        return m1;
    }
    else {
        return (1.0*(m1 + m2) / 2);
    }


    
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m,n;
        cin>>m;
        vector<int> array1(m);
        for (int i = 0; i < m; ++i){
            cin>>array1[i];
        }
        cin>>n;
        vector<int> array2(n);
        for (int i = 0; i < n; ++i){
            cin>>array2[i];
        }
        Solution ob;
        cout<<ob.MedianOfArrays(array1, array2)<<endl;
    }
    return 0; 
}



// } Driver Code Ends