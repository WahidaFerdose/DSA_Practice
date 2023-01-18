 #include <bits/stdc++.h>
using namespace std;

//Declare an empty set globally.
set<int> s;

// This method is for binary searching of each element of the larger array.
 bool hasFound(int num, int arr[],int len){

     int first=0;

     while(first<=len){

         int mid= (first+len)/2;

         if(arr[mid]==num)
           return true;

         else if(arr[mid]>num)
           len= mid-1;

         else
           first= mid+1;
     }

     return false;
 }


// This method is for adding the elements of the larger array.
void addAnother(int smallest[],int largest[],int smallestLen,int largestLen){

     for(int i=0; i<largestLen; i++){

         bool val= hasFound(largest[i],smallest,smallestLen);
         if(val==false)
          s.insert(largest[i]);
     }

 }

int main()
{

       int arr1[9] = {18,17,13,12,14,11,11,10,12};
       int arr2[10] = {16,13,14,13,15,11,12,10,19,10 };

      int m = sizeof(arr1) / sizeof(arr1[0]);
      int n = sizeof(arr2) / sizeof(arr2[0]);

    // Check which array length is smaller
    if(m>n){

       // sort the smaller  array
        sort(arr1,arr1+m);

      // Add the elements of smaller array into set
        for(int i: arr1)
          s.insert(i);

        addAnother(arr1,arr2,m,n);
    }

    else{
         // sort the smaller  array
        sort(arr2,arr2+n);

         // Add the elements of smaller array into set
        for(int i: arr2)
          s.insert(i);

        addAnother(arr2,arr1,n,m);
    }

      // Print the elements of the set.
    cout << "Number of elements after union operation: " << s.size() << endl;
	cout << "The union set of both arrays is :" << endl;

	for (auto itr = s.begin(); itr != s.end(); itr++)
		cout << *itr
			<< " ";

}
