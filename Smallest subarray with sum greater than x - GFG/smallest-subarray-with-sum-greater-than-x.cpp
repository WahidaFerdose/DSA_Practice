//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:

    int smallestSubWithSum(int arr[], int n, int x)
    {
        int count=0;
        int mi=INT_MAX;
        int sum=0;

        for(int i=0;i<n;i++)
        {
            sum=0;
            for(int j=i;j<n;j++)
            {
                sum=sum+arr[j];
                

                if(sum>x)
                {
                    count=(j-i)+1;
                    if(count<mi)
                    {
                        mi=count;
                       

                    }
                    break;

                }


            }
             if(mi==1)
                {
                    break;
                }
        }

        return mi;
    }
};

//{ Driver Code Starts.

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n,x;
		cin>>n>>x;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		Solution obj;
		cout<<obj.smallestSubWithSum(a,n,x)<<endl;
	}
	return 0;
}
// } Driver Code Ends