class Solution {
    void solve(vector<vector<string>> &ans, vector<string> &board, int n ,vector<int> &leftmost, vector<int> &uppD, vector<int> &lowD, int col )
    {
        if(col==n)
        {
            ans.push_back(board);
            return;
        }
        
        for(int row=0;row<n;row++)
        {
            if(leftmost[row]==0 && uppD[n-1+col-row]==0 && lowD[row+col]==0)
            {
                board[row][col]='Q';
                leftmost[row]=1;
                uppD[n-1+col-row]=1 ;
                lowD[row+col]=1;
                solve(ans,board,n,leftmost,uppD,lowD,col+1);
                 board[row][col]='.';
                leftmost[row]=0;
                uppD[n-1+col-row]=0;
                lowD[row+col]=0;
                   
                
            }
        }
    }

public:
    vector<vector<string>> solveNQueens(int n) {
       vector<vector<string>> ans;
        vector<string> board(n);
        string s(n,'.');
        for(int i=0;i<n;i++)
        {
            board[i]=s;
        }
        
        vector<int> leftmost(n,0), uppD(2*n-1,0),lowD(2*n-1);
        
        solve(ans,board,n,leftmost,uppD,lowD,0);
        return ans;
        
    }
};