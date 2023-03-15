//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++
class Solution
{
    
    long long fact(long long n)
    {
        // Write Your Code here
        if(n==1)
        {
            return 1;
        }
        return n*fact(n-1);
        
    }
    
public:
    vector<long long> factorialNumbers(long long N)
    {
        // Write Your Code here
        vector<long long>v;
        
        int i=1;
        long long int ans=1;
        
        while(ans<=N)
         {
             ans= fact(i);
             
             if(ans>N)
             {
                 break;
             }
             v.push_back(ans);
             i++;
         }
        
        return v;
        
        
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long N;
        cin>>N;
        Solution ob;
        vector<long long> ans = ob.factorialNumbers(N);
        for(auto num : ans){
            cout<<num<<" ";
        }
        cout<<endl;
        
    }
    return 0;
}
// } Driver Code Ends