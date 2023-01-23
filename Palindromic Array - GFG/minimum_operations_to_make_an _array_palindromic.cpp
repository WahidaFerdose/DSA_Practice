#include<bits/stdc++.h>
using namespace std;


int mergenedde(int arr[],int n)
{

    int i=0;
    int j=n-1;
    int c=0;
    if(i==j)
        return 0;

    while(i<=j)
    {

        if(arr[i]==arr[j])
        {
            i++;
            j--;
        }

        else if(arr[i]>arr[j])
        {
            arr[j-1]+=arr[j];
            c++;
            j--;
        }

        else
        {
            arr[i+1]+=arr[i];
            c++;
            i++;
        }
    }

    return c;
}

int main()
{

    int n;
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    cout<<mergenedde(arr,n);
}
