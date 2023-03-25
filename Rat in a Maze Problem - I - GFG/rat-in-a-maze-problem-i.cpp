//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution{
    void solve(vector<vector<int>> &m,int i,int j,int n, vector<string> &ans, string op,vector<vector<int>> &vis)
    {
        
        if(i==n-1 && j==n-1)
        {
            ans.push_back(op);
            return;
        }
        
        //Downward
        if(i+1<n && !vis[i+1][j] && m[i+1][j]==1)
        {
            vis[i][j]=1;
            solve(m,i+1,j,n,ans,op + 'D',vis);
            vis[i][j]=0;
        }
        //Left
        if(j-1>=0 && !vis[i][j-1] && m[i][j-1]==1)
        {
            vis[i][j]=1;
            solve(m,i,j-1,n,ans,op + 'L',vis);
            vis[i][j]=0;
        }
        //Right
        if(j+1<n && !vis[i][j+1] && m[i][j+1]==1)
        {
            vis[i][j]=1;
            solve(m,i,j+1,n,ans,op + 'R',vis);
            vis[i][j]=0;
        }
        if(i-1>=0 && !vis[i-1][j] && m[i-1][j]==1)
        {
            vis[i][j]=1;
            solve(m,i-1,j,n,ans,op + 'U',vis);
            vis[i][j]=0;
        }
        
    }
    public:
    vector<string> findPath(vector<vector<int>> &m, int n) {
        // Your code goes here
        vector<string> ans;
       // vector<vector<int>> vis;
        vector < vector < int >> vis(n, vector < int > (n, 0));
        if(m[0][0]==1 && m[n-1][n-1]==1)
        {
            solve(m,0,0,n,ans,"",vis);
            //ans.push_back("-1");
           // return ans;
        }
        //solve(m,0,0,n,ans,"",vis);
        return ans;
    }
};

    


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int> (n,0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m, n);
        sort(result.begin(), result.end());
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends