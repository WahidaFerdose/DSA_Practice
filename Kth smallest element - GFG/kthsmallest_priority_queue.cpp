#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    // arr : given array
    // l : starting index of the array i.e 0
    // r : ending index of the array i.e size-1
    // k : find kth smallest element and return using this function
    int kthSmallest(int arr[], int l, int r, int k) {
         priority_queue<int, vector<int>, greater<int> >pq;
        // int n=arr.size();
        int n=r+1;
        for(int i=l;i<n;i++){
            pq.push(arr[i]);
        }
        while(k!=1){
            pq.pop();
            k--;
        }
        return pq.top();
    }
};


int main()
{
    int test_case;
    cout<<"Test Case: "<<endl;;
    cin>>test_case;
    while(test_case--)
    {
        int number_of_elements;
        cout<<"Number_of_elements: "<<endl;
        cin>>number_of_elements;
        int a[number_of_elements];
        cout<<"Array elements: "<<endl;;

        for(int i=0;i<number_of_elements;i++)
            cin>>a[i];

        int k;
        cout<<"k: "<<endl;
        cin>>k;
        Solution ob;
        cout<<ob.kthSmallest(a, 0, number_of_elements-1, k)<<endl;
    }
    return 0;
}
// } Driver Code Ends

