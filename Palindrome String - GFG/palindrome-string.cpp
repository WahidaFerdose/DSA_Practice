//{ Driver Code Starts
 
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	

   bool checkpalindrome(int i,string &S)
   {
       if(i==S.size()/2)
       {
           return true;
       }
       
       if(S[i]!=S[S.size()-i-1])
       {
           return false;
       }
       
       checkpalindrome(i+1,S);
       
   }
	
	
	int isPalindrome(string S)
	{
	    // Your code goes here
	    return checkpalindrome(0,S);
	    
	}

};

//{ Driver Code Starts.

int main() 
{
   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		cin >> s;

   	    Solution ob;

   		cout << ob.isPalindrome(s) << "\n";
   	}

    return 0;
}
// } Driver Code Ends