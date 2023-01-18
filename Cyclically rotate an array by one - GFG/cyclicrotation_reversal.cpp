#include<bits/stdc++.h>
using namespace std;

void reve(int arr[],int s,int n)
{
    int j=n-1;
    int i=s;
    int temp;

    while(i<j)
    {
        temp=arr[j];
        arr[j]=arr[i];
        arr[i]=temp;

        i++;
        j--;
    }


}



int main()
{

    int arr[]={1,2,3,4,5,6,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    int d=2;


    reve(arr,0,n);
       for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    //left shift
    cout<<"Reverse First N-D elements: ";
    reve(arr,0,n-d);
       for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
     cout<<endl;




    reve(arr,n-d,n);
    cout<<"Reverse Last D elements: ";


      for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}
