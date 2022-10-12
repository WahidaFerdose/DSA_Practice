#include<bits/stdc++.h>
using namespace std;
class Selection
{
    public:
    void selectionsort(int a[],int n)
    {
        int i,j,m;

        for(i=0;i<n-1;i++)
        {
            m=i;
            for(j=i+1;j<n;j++)
            {
                if(a[j]<a[m])
                {
                    m=j;
                }
            }

            swap(a[i],a[m]);
        }

    }
};


void printarray(int a[], int n)
{
    for(int i=0;i<n;i++)
        {cout<<a[i]<<" ";}
}
int main()
{
    int t,n,i,a[10000];
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }



        Selection ob;
        ob.selectionsort(a,n);


        printarray(a,n);


    }

    return 0;
}
