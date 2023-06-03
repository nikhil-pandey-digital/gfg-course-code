
// v.imp hard question


/*
You are given N number of books. Every ith book has Ai number of pages.

You have to allocate contiguous books to M number of students. There can be many ways or permutations to do so. 
In each permutation, one of the M students will be allocated the maximum number of pages. 
Out of all these permutations, the task is to
 find that particular permutation in which the maximum number of pages allocated to a student is the minimum of those in all the other permutations and print this minimum value.

Each book will be allocated to exactly one student. Each student has to be allocated at least one book.

Note: Return -1 if a valid assignment is not possible, and allotment should be in contiguous order

*/

#include<bits/stdc++.h>
using namespace std;

/*
   neive approch :- T.c-> O(n2) when optimised with d.p
   using recursion  

   best approch:-  T.c-> O(nlog(n))  , s.c-> O(1);

     idea:- we will use binary search here 

     logic:-  since we can have the min. possible  books for alocation to a student is max(arr)
              and max  possible books for allocation to a student can be sum(arr) (in case of 1 student only)

      so we have our search space area from  low= max(arr) to high= sum(arr)
      and it is sorted .
      so we calculate  mid and assume that mid is the max allocation of pages to the students and pass it in our validate function to check
      if our assumption is right or wrong 

      if our assumption is right :-
               than there can be other values lesss than mid that also holds the condition true 
               so we check  for them by moving to the left half from mid
      
      if our assuption is wrong :-
                than there would be no values that are smaller than mid can  satisfies our assumption
                so we move to the right half          
   
*/






// supporting function
bool is_validate(int arr[],int n,int k,int mx){
     
     int count=1;
     int book_pages=0;

     for(int i=0;i<n;i++)
     {
         book_pages+=arr[i];

         if(book_pages>mx){
             count++;
             book_pages=arr[i];

             if(count>k)
               return false;
         }
     }

     return true;
}



// main logic:

  int allocate_pages(int arr[],int n, int k)
  {
        if(k>n )
          return -1;

      int min= *min_element(arr,arr+n);
      int sum= accumulate(arr,arr+n,0);

      int l=min,r=sum;
      int res=-1;

      while(l<=r)
      {
          long int mid= 1ll*(l+r)/2;

          if(is_validate(arr,n,k,mid)==true){
              r=mid-1;
              res=mid;
          }

          else{
              l=mid+1;
          }
      }

    return res;
  }
