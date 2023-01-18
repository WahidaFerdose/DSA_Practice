#include<bits/stdc++.h>
using namespace std;

int sea(int n)
{


    int c=0;
     while (n>0)
     {
         if(n&1==1)
            c++;
         n>>=1;
     }

     return c;
}


int main()
{

    int n;
    cin>>n;


    if(sea(n)==1)
        cout<<n<<" is power of 2";
    else
        cout<<"Not";

    return 0;
}
