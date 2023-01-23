//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
double MedianOfArrays(vector<int>& array1, vector<int>& array2);


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    double MedianOfArrays(vector<int>& array1, vector<int>& array2)
    {
        int N=array1.size();
        int M=array2.size();
        int p=N+M;
        int ar3[p];

        int i,j;

        i=0;
        j=0;
        int m=0;

          while(i<N && j<M)
            {
                if(array1[i]<array2[j])
                {
                    ar3[m]=array1[i];
                    i++;


                }
                else
                {
                    ar3[m]=array2[j];
                    j++;
                }

                m++;


            }

             while(i<N)
            {

                    ar3[m]=array1[i];
                    i++;

                m++;


            }


              while(j<M)
            {

                    ar3[m]=array2[j];
                    j++;

                m++;

            }


            int x,y;
            double med=0.0;

		    if(p%2!=0)
		    {
		        x=ar3[((p-1)+1)/2];
		        med=x;
		    }
		    else
		    {
		        x=ar3[((p-1))/2];

             y=ar3[((p-1)/2)+1];

             med=(1.0*(x+y)/2);
		    }

		    return med;





    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m,n;
        cin>>m;
        vector<int> array1(m);
        for (int i = 0; i < m; ++i){
            cin>>array1[i];
        }
        cin>>n;
        vector<int> array2(n);
        for (int i = 0; i < n; ++i){
            cin>>array2[i];
        }
        Solution ob;
        cout<<ob.MedianOfArrays(array1, array2)<<endl;
    }
    return 0;
}



// } Driver Code Ends
