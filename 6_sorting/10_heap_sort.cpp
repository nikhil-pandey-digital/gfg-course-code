#include<bits/stdc++.h>
using namespace std;

//heapify-> builds max.heap 
void heapify(int arr[], int sizeofheap,int i)
{
   int largest=i;

   int l= 2*i+1;
   if(l<sizeofheap && arr[l]>arr[largest])
     largest=l;

    int r= 2*i+2;
    if(r<sizeofheap && arr[r]>arr[largest])
      largest=r;

    if(largest!=i)
    {
        swap(arr[i],arr[largest]);
        heapify(arr,sizeofheap,largest);
    }
    
}



void heap_sort(int arr[],int n  )
{
   
    //step 1-> make a max. heap from the given array
    for( int i=n/2-1;i>=0;i--)
        heapify( arr, n,i);


     
       
   
    //step2 -> delete root node  and swap it with the last leaf  node element thus reducing the size of max.heap 
    //            by 1  do this until size of heap>1 

        for(int  i= n-1;i>=1;i-- )
        {
            swap(arr[0],arr[i]);
            heapify(arr,i,0);
        }
}

 int main()
 {
    int arr[]={2,8,4,69,7,5,3,8,42,5,9,4,0,3,4};

    int n=sizeof(arr)/sizeof(arr[0]);
   cout<<n<<endl;

     heap_sort( arr, n);

   cout<<"sorted array is "<<endl;

   for(int x :arr)
    {
        cout<<x<<" ";
    }



 }