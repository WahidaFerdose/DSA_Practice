//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution {
public:
    int findMidSum(int ar1[], int ar2[], int n) {

            int ar3[n+n];
            int p=n+n;
            int i,j;

            i=0;
            j=0;
            int m=0;

            while(i<n && j<n)
            {
                if(ar1[i]<ar2[j])
                {
                    ar3[m]=ar1[i];
                    i++;


                }
                else
                {
                    ar3[m]=ar2[j];
                    j++;
                }

                m++;


            }

             while(i<n)
            {

                    ar3[m]=ar1[i];
                    i++;

                m++;


            }


              while(j<n)
            {

                    ar3[m]=ar2[j];
                    j++;

                m++;

            }





            int sum=0;

            sum=sum+ar3[(p-1)/2]+ar3[((p-1)/2)+1];

            return sum;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int ar1[n], ar2[n];
        for (i = 0; i < n; i++) {
            cin >> ar1[i];
        }
        for (i = 0; i < n; i++) {
            cin >> ar2[i];
        }
        Solution ob;
        auto ans = ob.findMidSum(ar1, ar2, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends