//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution{

    void solve(int i,int j,vector<vector<int>> &m,int n, vector<string> &ans, string move,vector<vector<int>> &vis,int di[],int dj[])
    {
        
        if(i==n-1 && j==n-1)
        {
            ans.push_back(move);
            return;
        }
        
        string s="DLRU";
        for(int k=0;k<4;k++)
        {
            int nexti=i+di[k];
            int nextj=j+dj[k];
            if(nexti>=0 && nextj>=0 && nexti<n && nextj<n && !vis[nexti][nextj] && m[nexti][nextj]==1)
            {
                vis[i][j]=1;
                solve(nexti, nextj, m, n, ans, move + s[k], vis, di, dj);
                vis[i][j]=0;
                
            }
            
        }
        
        
       /* //Downward
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
        }*/
    }
        
    
    
    public:
    vector<string> findPath(vector<vector<int>> &m, int n) {
  
        
        // Your code goes herev
        vector<string> ans;
        vector<vector<int>> vis(n,vector<int> (n,0));
        int di[]=
        {
            +1,
            0,
            0,
            -1
        };
        
        int dj[]={
            0,
            -1,
            +1,
            0
        };
        
    
        if(m[0][0]==1 && m[n-1][n-1]==1)
        {
            solve(0,0,m,n,ans,"",vis,di,dj);
        }
        
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