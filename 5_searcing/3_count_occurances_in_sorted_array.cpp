#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int left_most_occurance(int arr[], int target,int l,int r)
{
     if(l>r) return -1;

     int mid=(l+r)/2;

     if(arr[mid]==target)
     {
         if(mid==0||arr[mid]!=arr[mid-1])
         {
             return mid;
         }

         else {
             
             return left_most_occurance(arr, target, l, mid-1);
         }

     }
     else if(arr[mid]>target)
     {
      
         return left_most_occurance(arr, target, l, mid-1);
     }
    
    else{
        
        return left_most_occurance(arr, target, mid+1, r);
    }

    
}

int right_most_occurance(int arr[],int n,int target,int l, int r)
{
    if(l>r) return -1;

    int mid=(l+r)/2;

    if(arr[mid]==target)
    {
        if(mid==n-1||arr[mid]!=arr[mid+1])
          return mid;
        else 
          return  right_most_occurance(arr,n,target,mid+1,r); 

    }

    else if(arr[mid]>target)
    {
        return right_most_occurance(arr,n,target,0,mid-1);
    }

    else{
        return right_most_occurance(arr,n,target,mid+1,r);
    }
}


int count_occurance(int arr[],int size,int target)
{
  int left=left_most_occurance(arr, target,0,size-1);
    
    if (left==-1)
       return 0;
       
  int right=right_most_occurance(arr, size, target,0, size-1);

  return right-left+1;
}

int main()
{
    int n;

    cout<<"enter the size"<<endl;
    cin>>n;

    int arr[n];

   cout<<"enter the elements in sorted order "<<endl;

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
     
     int target;
     cout<<"enter the element whose occurance you want to know "<<endl;
     cin>>target;

    cout<<target<<" has occured "<<count_occurance(arr,n,target)<<"times";
}