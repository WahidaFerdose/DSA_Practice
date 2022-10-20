//{ Driver Code Starts
//Initial Template for C++


#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++


class Solution
{
	public:
		string is_palindrome(int n)
		{
		    string n2;
		    n2=to_string(n);
		    int l=n2.length();

		    int m;
		    char temp;

            for (int i = 0; i <l/2 ; i++)
            {
                temp = n2[i];
                n2[i] = n2[l - i - 1];
                n2[l - i - 1] = temp;
            }


            m = stoi(n2);

            if(m==n)
            {
                return "Yes";
            }
            else
            {
               return "No";
            }
			
			/*
			
					   string s=to_string(n);
		    string y=s;
		    reverse(s.begin(),s.end());
		    if (s==y)
		    return "Yes";
		    return "No"; */

		   
		    

		}
};

//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n;
    	cin >> n;
    	Solution ob;
    	string ans = ob.is_palindrome(n);
    	cout << ans <<"\n";
    }
	return 0;
}

// } Driver Code Ends
