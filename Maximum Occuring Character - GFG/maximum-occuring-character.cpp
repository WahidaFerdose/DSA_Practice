//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution
{
    public:
    //Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string str)
    {
        // Your code here
        int a[26]={0};
        int n;
        for(int i=0;i<str.size();i++)
        {
            if(str[i]>='A' && str[i]<='Z')
            {
                n=str[i]-'A';
            }
            else
            {
                n=str[i]-'a';
            }
            a[n]++;
        }
        

        
        int ma=-1;
        int ans=0;
        for(int i=0;i<26;i++)
        {
            if(a[i]>ma)
            {
                ma=a[i];
                ans=i;
            }
            
        }
        
        return 'a'+ans;
    }

};

//{ Driver Code Starts.

int main()
{
   
    int t;
    cin >> t;
    while(t--)
    {
        string str;
        cin >> str;
    	Solution obj;
        cout<< obj.getMaxOccuringChar(str)<<endl;
    }
}
// } Driver Code Ends