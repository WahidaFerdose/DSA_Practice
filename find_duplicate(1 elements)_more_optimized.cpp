#include<bits/stdc++.h>
using namespace std;


int main()
{

    int nums1[]={2,2,2,2,2};

    int n=sizeof(nums1)/sizeof(nums1[0]);

    int res = 0;

    for (int i = 0; i < n- 1; i++)
        res = res ^ (i + 1) ^ nums1[i];
    res = res ^ nums1[n - 1];



    cout<<res;

      /*  for(int i=0;i<sizea;i++)
        {
            cout<<nums1[i]<<" ";
        }*/

}



