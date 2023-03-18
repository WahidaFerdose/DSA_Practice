//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution {
    bool isValid(int n, int d)
{
    // Get last digit and initialize sum from right side
    int digit = n%10;
    int sum = digit;
 
    if (digit == d)
    return false;
 

    n /= 10;
    while (n)
    {
      
        digit = n%10;
 
        if (digit == d || digit <= sum)
            return false;
 
        else
        {
            sum += digit;
            n /= 10;
        }
    }
    return 1;
}
  public:
    vector<int> goodNumbers(int L, int R, int D) {
        // code here
        vector<int> v;
        for(int i=L;i<=R;i++)
        {
            if(isValid(i,D))
            {
                v.push_back(i);
            }
        }
        
        return v;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int L, R, D;
        cin >> L >> R >> D;
        Solution ob;
        vector<int> ans = ob.goodNumbers(L, R, D);
        for (auto u : ans) cout << u << " ";
        cout << "\n";
    }
}
// } Driver Code Ends