#include <bits/stdc++.h>
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

    cout<<target<<"'s left most index is "<<left_most_occurance(arr,target,0,n-1);

}
