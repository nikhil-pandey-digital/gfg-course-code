#include<bits/stdc++.h>
using namespace std;

 //leetcode hard

 /*
 you will be given two sorted arrays you have to find the median of the combined array.
 */

//neive approch:- T.c-> O((n1+n2)log(n1+n2)) s.c-> O(n1+n2)
 /*
 you will move the both arrays into a single combined array 
 then sort them .
 depending upon the size of the combined array
  if size even-> then return the median of n/2 & (n/2)+1
  if size odd-> then return the n/2 th element as median
 
 */

//better approch:- T.c-> O(n1+n2) s.c -> O(n1+n2)
// by using the merge process of merging two sorted arrays



//best approch:-  T.c-> O(log(n)) s.c-> O(1)
// idea is to use binary search based algorithm

/*
logic:-
   
    we will try to maintin two sets such that , set1 contains all the elements less than or equal to set2

    we will do so by finding mid index using binary-search in the array 1 ( make sure that  size(arr1)<= size(arr2) always)
    
     then we will find the corresponding index of array 2 by the formula ((n1+n2+1)/2)-i1;

     once we find the index i1 and i2 that satisfies our condition of the two sets then we will get the median by 

     condition 1:  n1+n2 is even
       median of( max (ele. of first set) and min (ele. of the second set ) )

     condition 2: n1+n2 is odd
       max(ele. of first set)  

*/


double find_median(int arr1[],int n1, int arr2[],int n2)
{

    if(n1>n2)
       return find_median( arr2,n2, arr1,n1);

    int begin1=0,end1=n1;
    while(begin1<=end1)

    {
        // calculating the  mid index of array 1
        int i1=(begin1+end1)/2;
        
        //calculating the corresponding index of array 2
        int i2=((n1+n2+1)/2)-i1;


        //checking  and handling for indexes that are   starting index or ending index
        int left1= (i1==0)?INT_MIN:arr1[i1-1];

        int right1= (i1==(n1))?INT_MAX:arr1[i1];

        int left2= (i2==0)?INT_MIN:arr2[i2-1];

        int right2= (i2==(n2))?INT_MAX:arr2[i2];
        
        //checking if the both indexes are diving the arrays into  the required two sets
        if((left1<=right2) && (left2<=right1))
        {  
            //returning median for even no of elements
            if((n1+n2)%2==0)
            {
                  return   ((max(left1,left2)+min(right1,right2))/2.0);
            }
           
            //returning mediian for odd no of elements
            else{
                 return ((double) max(left1,left2));
            }
        }
          
          // moving to the left half 
        else if( left1>right2)
        {
            end1=i1-1;
        }

        //moving to the right 
        else {
            begin1=i1+1;
        }
    }


}

int main()
{
    int n1,n2;

    cout<<"enter the size of first array"<<endl;
    cin>>n1;

    int arr1[n1];

   cout<<"enter the elements of first array"<<endl;

    for(int i=0;i<n1;i++)
    {
        cin>>arr1[i];
    }

    cout<<"enter the size of second array"<<endl;
    cin>>n2;

    int arr2[n2];

   cout<<"enter the elements of second array"<<endl;

    for(int i=0;i<n2;i++)
    {
        cin>>arr2[i];
    }

cout<<"median is "<< find_median(arr1, n1,  arr2,n2);
  
}    