//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
#include <string>

using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
    void solve(int a[],int n,int ind,string m[],string output,vector<string> &ans)
    {
        if(ind>=n)
        {
            ans.push_back(output);
            return;
        }
        
        int number=a[ind];
        string c = m[number];
        
        for(int i=0;i<c.length();i++)
        {
            output.push_back(c[i]);
            solve(a,n,ind+1,m,output,ans);
            output.pop_back();
            
        }
        
    }
    public:
    //Function to find list of all words possible by pressing given numbers.
    vector<string> possibleWords(int a[], int N)
    {
        //Your code here
        string mapping[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        vector<string> ans;
        if(N==0)
        return ans;
       
        string output;
        solve(a,N,0,mapping,output,ans);
        return ans;
    }
};


//{ Driver Code Starts.

int main() {
  
	int T;
	
	cin >> T; //testcases
	
	while(T--){ //while testcases exist
	   int N;
	    
	   cin >> N; //input size of array
	   
	   int a[N]; //declare the array
	   
	   for(int i =0;i<N;i++){
	       cin >> a[i]; //input the elements of array that are keys to be pressed
	   }
	   
	   Solution obj;
	   
	  vector <string> res = obj.possibleWords(a,N);
	  for (string i : res) cout << i << " ";
	   cout << endl;
	}
	
	return 0;
}
// } Driver Code Ends