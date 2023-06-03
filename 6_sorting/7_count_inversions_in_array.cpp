
//problem statement
/*
you will be given a array you have to calculate the total no. of inversions in the array

inversion is that condition :-
  0<=i<j<=n  and arr[i]>arr[j]

*/

#include <bits/stdc++.h>
using namespace std;

//neive approch:- T.c->O(n^2)
//using nested for loop

//best approch :- T.C->O(n log(n))
//apply merge sort and count the no. of inversions during merging process 



int count_merge(int arr[],int start, int mid, int end)
{
    int first_array_size = mid-start+1;

    int second_array_size =  end-mid;

    int first_array[first_array_size];

    int second_array[second_array_size];

    

    int i=0,j=0,res=0,k=start;

    for(;i<first_array_size;i++)
    {
        first_array[i]=arr[k+i];
    }

    i=0;
     for(;i<second_array_size;i++)
    {
        second_array[i]=arr[mid+1+i];
    }
    
    i=0;

    while(i<first_array_size && j<second_array_size)
    {
        if(first_array[i]<=second_array[j])
        {
           arr[k]=first_array[i];
           i++;
           k++;
           
        }

        else{
            //counting the inversion
            res+=first_array_size-i;
            
            arr[k]=second_array[j];
            k++;
            j++;
        }


    }

    while(i<first_array_size)
    {
          arr[k]=first_array[i];
          i++;
          k++;
    }

    while(j<second_array_size)
    {
          arr[k]=second_array[j];
          j++;
          k++;

    }
  
  return res;

}

int count_inversion(int arr[],int start, int end)
{
   int res=0,mid;

   if(start<end)
   {
        mid= start+(end-start)/2;

        res+=count_inversion(arr,start,mid);

        res+=count_inversion(arr,mid+1,end);

        res+=count_merge(arr,start,mid,end);
        

   }
   return res;
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

    cout<<"total no. of inversions are-> "<<count_inversion(arr,0,n-1)<<endl;

    for (int x : arr)
    {
        cout << x << " ";
    }
}