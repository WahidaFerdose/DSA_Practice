#include<bits/stdc++.h>
using namespace std;

int main()
{

    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);

    int i, temp,j=n-1;

    while(i!=j)
    {
        temp=arr[j];
        arr[j]=arr[i];
        arr[i]=temp;


        i++;

    }

    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
