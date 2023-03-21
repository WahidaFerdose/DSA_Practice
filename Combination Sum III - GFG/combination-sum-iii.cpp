//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
    void solve(int n,int ind,vector<vector<int>> &ans , vector<int> op, int k)
    {
        if(n==0 && k==0)
        {
            ans.push_back(op);
            return;
        }
        
        for(int i=ind;i<10;i++)
        {
            if(i>n) break;
            op.push_back(i);
            solve(n-i,i+1,ans,op,k-1);
            op.pop_back();
        }
    }
  public:
    vector<vector<int>> combinationSum(int K, int N) {
        // code here
        vector<vector<int>> ans;
        vector<int> op;
        solve(N,1,ans,op,K);
        return ans;
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, K;
        cin >> K >> N;

        Solution obj;
        vector<vector<int>> ans = obj.combinationSum(K, N);
        sort(ans.begin(), ans.end());
        for (auto &arr : ans) {
            for (auto it : arr) cout << it << ' ';
            cout << endl;
        }
    }
    return 0;
}
// } Driver Code Ends