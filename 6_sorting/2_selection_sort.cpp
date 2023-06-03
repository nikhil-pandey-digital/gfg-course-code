#include<bits/stdc++.h>
using namespace std;

void selection_sort(int arr[],int n)
{

    int i,j,min_idx;

    // One by one move boundary of
    // unsorted subarray
    for (i = 0; i < n-1; i++)
    {
       
        // Find the minimum element in
        // unsorted array
        min_idx = i;
        for (j = i+1; j < n; j++)
        if (arr[j] < arr[min_idx])
            min_idx = j;
 
        // Swap the found minimum element
        // with the first element
        swap(arr[min_idx], arr[i]);
    }

}

int main()
{
    int n;
    cout<<"enter the size of array"<<endl;
    cin>>n;
   
   int arr[n];
   cout<<"enter the elements of array"<<endl;

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];

    }

    selection_sort(arr,n);
    cout<<"sorted array is : ";
    for(int x :arr)
    {
        cout<<x<<" ";
    }
}