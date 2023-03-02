//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
  
  bool getbit(int num,int mask)
  {
      return ((num & mask)!=0);
  }
  
    int setbit(int num,int mask)
  {
     return (num | mask);
  }
  
    int clbit(int num,int mask)
  {
      return (num & mask);
  }
    void bitManipulation(int num, int i) {
        
       //get bit
        int mask = 1<<(i-1);
        
        cout<<getbit(num,mask)<<" ";
        cout<<setbit(num,mask)<<" ";
        cout<<clbit(num,~mask);
        
     
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n >> i;
        Solution ob;
        ob.bitManipulation(n, i);
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends