//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
vector<string> AllParenthesis(int n) ;


// } Driver Code Ends
//User function Template for C++

// N is the number of pairs of parentheses
// Return list of all combinations of balanced parantheses
class Solution
{
    void solve(string s,int o,int c,int n,vector<string> &ans)
    {
        
        if(o==n && c==n)
        {
            ans.push_back(s);
            return;
        }
        /*
        
        if(o>c)
        {
           // s+=")";
            solve(s+")",o,c+1,n,ans);
        }
            
        if(o<n)
        {
          
            solve(s+"(",o+1,c,n,ans);
        }
        */
      
      
        if(o>c)
        {
            solve(s+")",o,c+1,n,ans);
        }
            
        if(o<n)
        {
                
            solve(s+"(",o+1,c,n,ans);
        }

        
    }
    public:
    vector<string> AllParenthesis(int n) 
    {
        // Your code goes here 
        vector<string> ans;
        if(n==0)
        {
            return ans;
        }
        string s="";
        solve(s,0,0,n,ans);
        return ans;
    }
};

//{ Driver Code Starts.


int main() 
{ 
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		Solution ob;
		vector<string> result = ob.AllParenthesis(n); 
		sort(result.begin(),result.end());
		for (int i = 0; i < result.size(); ++i)
			cout<<result[i]<<"\n";
	}
	return 0; 
} 

// } Driver Code Ends