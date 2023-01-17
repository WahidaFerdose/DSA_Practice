
#include<bits/stdc++.h>
using namespace std;

void getans(int arr[],int asize, int *ma, int *mi)
{
    for(int i=0;i<asize;i++)
    {
        if(arr[i] < *mi)
        {
            *mi=arr[i];
        }

          if(arr[i] > *ma)
        {
            *ma=arr[i];
        }
    }
}

int main()
{
    int arr[]={1000, 11, 445, 1, 330, 3000};
    int asize= 6;
    int ma=INT_MIN;
    int mi=INT_MAX;

    getans(arr,asize,&ma, &mi);
    cout<<"Maximum: "<<ma<<endl;;
    cout<<"Minimum: "<<mi;
    return 0;
}
