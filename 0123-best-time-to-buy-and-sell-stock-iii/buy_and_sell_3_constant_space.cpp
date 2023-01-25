

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit(int prices[], int n) {



        // int n=prices.size();
        int mp1=INT_MAX,mp2=INT_MAX;
        int p1=0,p2=0;



        //vector use korle

        //vector<int> v;
   // v.assign(7, 100);



        for(int i=0;i<n;i++)
        {
            mp1=min(mp1,prices[i]);
            p1=max(p1,prices[i]-mp1);

             mp2=min(mp2,prices[i]-p1);
            p2=max(p2,prices[i]-mp2);

            cout<<prices[i]<<":"<<" mp1: "<<mp1<<" p1: "<<p1<<" mp2: "<<mp2<<" p2: "<<p2<<endl;
        }



        return p2;



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
