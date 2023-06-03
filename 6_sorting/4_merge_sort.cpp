#include<bits/stdc++.h>
using namespace std;

void merge(int arr[],int left, int mid,int right)
{
    //creating extra two arrays for storing left part and right part of the array
    // and copying values in them from the original array  
    int left_size=mid-left+1; 
    int right_size=right-mid;

    int l[left_size];
    
    int r[right_size];

    int i,j,k=left; 

    for(i=0;i<left_size;i++)
    {
        l[i]=arr[left+i];
    }

    for(i=0;i<right_size;i++)
    {
        r[i]=arr[mid+1+i];
    }
    
//--------------------------------------------
//  merging the two arrays in the original array
// by using the standard merge algorithm of two sorted array

    i=0,j=0;

    while(i<left_size && j<right_size)
    {
          if(l[i]<=r[j])
          {
             arr[k]=l[i];
             i++;
             k++;
          }

          else{
              arr[k]=r[j];
              j++;
              k++;
          }
    }

    while(i<left_size)
    {
          arr[k]=l[i];
          i++;
          k++;  
    }

    while(j<right_size)
    {
        arr[k]=r[j];
        j++;
        k++;
         
    }
}


void mergeSort(int arr[],int start,int end)
{
       
      
      if(start<end)
      {
       int mid = start+(end-start)/2;

        mergeSort(arr,start,mid);

        mergeSort(arr,mid+1,end);

        merge(arr,start,mid,end);

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

    mergeSort(arr,0,n-1);
    cout<<"sorted array is : ";
    
    for(int x :arr)
    {
        cout<<x<<" ";
    }
}