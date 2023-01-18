// A C++ program to put all negative
// numbers before positive numbers
#include <bits/stdc++.h>
using namespace std;

void rearrange(int arr[], int n)
{
	int j = n-1;
	int i=0;
	while(i<=j)
    {
        if(arr[i]<0 && arr[j<0])
            i++;
        else if(arr[i]>0 && arr[j]<0)
        {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
        else if(arr[i]>0 && arr[j]>0)
        {
            j--;
        }
    }

}

// A utility function to print an array
void printArray(int arr[], int n)
{
	for (int i = 0; i < n; i++)
		printf("%d ", arr[i]);
}

// Driver code
int main()
{
	int arr[] = { -12,11,-13,-5,6,-7,5,-3,-6 };
	int n = sizeof(arr) / sizeof(arr[0]);
	rearrange(arr, n);
	printArray(arr, n);
	return 0;
}

