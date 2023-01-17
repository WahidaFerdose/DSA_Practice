

#include<bits/stdc++.h>
using namespace std;

void getans(int arr[],int s, int e)
{
    int sw;
    while(s<e)
    {
        sw=arr[e];
        arr[e]=arr[s];
        arr[s]=sw;

        s++;
        e--;
        }



}

int main()
{
    int arr[]={1000, 11, 445, 1, 330, 3000};
    int asize= sizeof(arr)/sizeof(arr[0]);


    getans(arr,0,asize-1);

    for(int i=0;i<asize;i++)
        cout<<arr[i]<<" ";

    return 0;
}
