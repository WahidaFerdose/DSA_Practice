//{ Driver Code Starts
// Initial Template for C++

// {Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
// } Driver Code Ends


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int dataTypeSize(string str) {
        // your code here
        
        int a;
        if(str=="Character")
          {
              a = sizeof(char);
             
          }
        else if(str=="Integer")
          { a= sizeof(int);
          }
        else if(str=="Float")
          {
              a= sizeof(float);
          }
         else
          {
              a= sizeof(double);
          }
          
          
          return a;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        Solution ob;
        cout << ob.dataTypeSize(str);
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends