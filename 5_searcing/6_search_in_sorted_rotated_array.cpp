#include <bits/stdc++.h>
using namespace std;

/*
question :-  you are given a sorted rotated array by k times.
             you have to find and return the index of given element
*/

/*
   Logic:- since the array is sorted and rotated therefore  if we pick any index b/w the array.
           we will find that either left side from that index or right side from index is sorted part

         1.  therefore we will apply binary search and find the mid .
         2.   if element is at mid  return mid
         3.   else check if left half is sorted or right half is sorted
         4.   depending upon which part is sorted move to that part only if target element lies in that range 
         5.   other wise move to the other part of the array.
         6.   if nothing find then return -1
*/

int search_in_rotated_array(int arr[],int n, int target)
{
    int l=0,r=n-1;
    int mid;
    while(l<=r)
    {
         mid=(l+r)/2;

        if(arr[mid]==target)
            return mid;


      //checking if the left half is sorted
        else if(arr[mid]>arr[l])
        {

            //checking if target is in the range of left half
            if(arr[l]<=target && target<arr[mid])
               r=mid-1;

           // target not in the range of left half so moving to right half    
            else
              l=mid+1;   
        }   

       //checking if the right half is sorted
        else{
            //checking if target is in the range of right half
            if(arr[mid]<target && target<arr[r])
               l=mid+1;

            // target not in the range of right half so moving to left half    
             else
               r=mid-1;  
        } 

    }

    return -1;

}


int main()
{
    int n;

    cout<<"enter the size"<<endl;
    cin>>n;

    int arr[n];

   cout<<"enter the elements of  sorted rotated array"<<endl;

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
     
     int target;
     cout<<"enter the element whose index you want to know "<<endl;
     cin>>target;

    cout<<target<<" has occured at "<<search_in_rotated_array(arr,n,target)<<"index";
}