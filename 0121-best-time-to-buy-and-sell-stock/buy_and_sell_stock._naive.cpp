#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit(int prices[], int n) {


        int pr=0,mi=INT_MIN;

        for(int i=0;i<n-1;i++)
        {

            for(int j=i+1;j<n;j++)
            {
                pr=0;
                pr+=prices[j]-prices[i];
                 cout<<"j: "<<j<<" ";
                  cout<<"i: "<<i<<" ";
                cout<<"pr: "<<pr<<endl;

                if(pr>mi)
                {
                    mi=pr;
                }
            }
        }


        if(mi<=0)
        {
            return 0;

        }
        else
        {
            return mi;
        }
    }

};


//{ Driver Code Starts.

int main() {


		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		Solution obj;
		cout<<obj.maxProfit(a,n)<<endl;

	return 0;
}
