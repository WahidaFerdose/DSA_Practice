#include<bits/stdc++.h>
using namespace std;
void swapal(int *arr,int n)
{
    for(int i=0;i+1<n;i+=2)
    {
        swap(arr[i],arr[i+1]);
    }
}

int main()
{

    int arr[]={1,2,3,4,5,6};
    int n=sizeof(arr)/sizeof(arr[0]);


    swapal(arr,n);

    for(int i=0;i<n;i++)
    {

        cout<<arr[i]<<" ";
    }
}
