#include<bits/stdc++.h>
using namespace std;


int main()
{

    int nums1[]={1,3,4,2,2};

    int n=sizeof(nums1)/sizeof(nums1[0]);


    sort(nums1,nums1+n);

    int k=0;

    for(int i=0;i<n-1;i++)
    {
        if(nums1[i]==nums1[i+1])
        {
            k=nums1[i];

       }

    }



    cout<<k;

      /*  for(int i=0;i<sizea;i++)
        {
            cout<<nums1[i]<<" ";
        }*/

}



