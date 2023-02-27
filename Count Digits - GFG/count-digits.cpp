//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public:
    int evenlyDivides(int N){
        //code here
        
        int digit,check,t=N;
        int c=0;
        
        while(t!=0)
        {
            digit=t%10;
            if(digit!=0)
            {
                if(N%digit==0)
                {
                    c++;
                }
            }
            
            t=t/10;
        }
        
        return c;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.evenlyDivides(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends