#include <bits/stdc++.h>
using namespace std;

/* 
   question:- you will be given an unsorted array and you have to find the peak element in the array
   an element is peak if it is greater than or equal  to its left and right neighbouring elements
*/

/*
  neive approch:- T.C-> O(n)
  we will simply traverse through array and check for each element either it is peak or not.
*/

int find_peak_element_neive(int arr[],int n)
{
        if(n==1)
          return arr[n-1];
     
    for(int i=0;i<n;i++)
    {
        if(i==0 && arr[i]>=arr[i+1])
        {
          return arr[i];
        }

        else if(i==n-1 && arr[i]>=arr[i-1])
         {
             return arr[i];
         }
       
       else {
           if(arr[i]>=arr[i-1] && arr[i]>=arr[i+1])
           {
               return arr[i];
           }
       }

    }
  
}

//optimised approch
/*
   idea:-
      we will apply binary search here ,it is one of the odd cases where binary search is applied in an unsorted array
      the reason why  binary search is applicable here is that:-
        there is a pattern/fact that allows us to ignore one half of the array while searching

        the fact is that:-
            1) if arr[mid]<arr[mid-1] than left half of the array must have a peak element
            2) if arr[mid]<arr[mid+1] than right half of the array must have a peak element
*/
//T.c -> O(log n)

int find_peak_element_optimised(int arr[],int n)
{
        if(n==1)
          return arr[n-1];
     
      int l=0,r=n-1;

      while(l<=r)
      {
          int mid=(l+r)/2;

         // checking if we are at begining of array or we have to find in left half
          if(mid==0||arr[mid]<arr[mid-1])
          {
              if(mid==0 && arr[mid]>=arr[mid+1])
                return arr[mid];
              else
                r=mid-1;  
          }

        // checking if we are at the end of the array or we have to  find in right half
          else if(mid==n-1 || arr[mid]<arr[mid+1])
          {
               if(mid==n-1 && arr[mid]>=arr[mid-1])
               {
                   return arr[mid];
               }

               else{
                   l=mid+1;
               }
          }
       
       // we have confirmed till here that now we will be checking for a element which is in b/w the starting and end
       // checking if the  element at mid  is peak or not 
         else if(arr[mid]>=arr[mid-1]&& arr[mid]>=arr[mid+1])
         {
             return arr[mid];
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

   cout<<"enter the elements of  array"<<endl;

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    cout<<" one of the peak element in the array is "<<find_peak_element_optimised( arr, n);
}    