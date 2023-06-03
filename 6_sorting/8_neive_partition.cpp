
// we are doing partition of array such that 
// elements to the left of pivot element are smaller or equal to the pivot elements 
// elements to the right of pivot element are greater than pivot element


#include<bits/stdc++.h>
using namespace std;

 int neive_partition(int arr[],int l, int r,int p)
 {
    int temp[r-l+1];

    int i,count=0;

    for(i=l;i<=r;i++)
    {
        if(arr[i]<=arr[p] && i!=p)
        {
            temp[count]=arr[i];
            count++;
        }

    }

    temp[count++]=arr[p];

    int ans=count-1;

     for(i=l;i<=r;i++)
    {
        if(arr[i]>arr[p] )
        {
            temp[count]=arr[i];
            count++;
        }

    }

    for(i=l;i<=r;i++)
    {
        arr[i]=temp[i-l];
    }

    return ans;

 }

 int main()
 {
    int arr[]={2,8,4,69,7,5,3,8,42,5,9,4,0,3,4};

   int ans= neive_partition(arr, 0, 14, 7);

   cout<<"index of pivot element is now"<<ans<<endl;

   for(int x :arr)
    {
        cout<<x<<" ";
    }



 }
