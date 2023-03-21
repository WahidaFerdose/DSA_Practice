//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
    void solve(vector<int> &a, int ind, int t, vector<vector<int>> &ans, vector<int> op)
    {
        if(t==0)
        {
            ans.push_back(op);
            return;
        }
        
        for(int i=ind;i<a.size();i++)
        {
            if(i>ind && a[i]==a[i-1]) continue;
            if(a[i]>t) break;
            
            op.push_back(a[i]);
            solve(a,i+1,t-a[i],ans,op);
            op.pop_back();
        }
    }
  public:
    vector<vector<int>> combinationSum2(vector<int> &candidates, int target) {
        // Write your code here
        sort(candidates.begin(),candidates.end());
        vector<vector<int>> ans;
        vector<int> op;
        
        solve(candidates,0,target,ans,op);
        return ans;
    }
};

//{ Driver Code Starts.
int main() {

    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> candidates(n);
        for (int i = 0; i < n; ++i) {
            cin >> candidates[i];
        }
        // char marker;
        // cin >> marker;

        Solution obj;

        vector<vector<int>> comb = obj.combinationSum2(candidates, k);
        sort(comb.begin(), comb.end());
        cout << "[ ";
        for (int i = 0; i < comb.size(); i++) {
            cout << "[ ";
            for (int j = 0; j < comb[i].size(); j++) {
                cout << comb[i][j] << " ";
            }
            cout << "]";
        }
        cout << " ]\n";

        // cout << "\n~\n";
    }
    fclose(stdout);
    return 0;
}

// } Driver Code Ends