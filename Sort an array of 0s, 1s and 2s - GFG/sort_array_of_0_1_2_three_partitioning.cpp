#include<iostream>
using namespace std;
void swap ( int *x  , int *y )
{
    int temp ;
    temp = *x ;
    *x = *y ;
    *y = temp;
}
void sort_array_0_1_2 ( int A[ ] , int n )
{
    int low = 0 , mid = 0 ,  high = n - 1 ;
    while ( mid <= high )
    {
        if ( A [ mid ] == 0 )
        {
            swap ( &A [ low ] , &A [ mid ] ) ;
            low = low + 1 ;
            mid = mid + 1 ;

        }
        else if ( A [ mid ] == 1 )
        {
            mid = mid + 1 ;
        }
        else
        {
            swap ( &A [ high ] , &A [ mid ] ) ;
            high = high - 1 ;
        }
    }
}



int main()
{
    int  i;

    int A[] = {0,1,2,0,2,1,0,1,2,0,0};


      int n = sizeof(A) / sizeof(A[0]);

    cout << " Array after sorting : \n " << endl ;
    sort_array_0_1_2 ( A , n ) ;
    for ( i = 0 ; i < n ; i++ )
    {
        cout <<  A  [  i  ] <<" " ;
    }
    return 0;

}

