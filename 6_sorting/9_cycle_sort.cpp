#include<bits/stdc++.h>
using namespace std;

void cycle_sort(int arr[],int n)
{
    //count number of memory writes
    int writes=0;

    // traverse array elements and put it to on
    // the right place
    for(int cycle_start=0; cycle_start<=n-2; cycle_start++)
    {
       // initialize temp as starting point
        int temp=arr[cycle_start];

          // Find position where we put the temp. 
        //   We basically count all smaller elements on right side of current index. 
        int position=cycle_start;

        for(int i=cycle_start+1;i<n;i++)
        {
            if(arr[i]<temp)
              position++;
        }
    
    // If temp is already in correct position
        if(position==cycle_start)
          continue;

    // ignore all duplicate  elements
        while(arr[position]==temp) 
           position++;

  // put the temp to it's right position
       swap(temp,arr[position]);
         writes++;

     //doing the same process for other elements of the cycle    
       while(position!=cycle_start) 
       {
            position=cycle_start;
           
        // Find position where we put the element
            for(int i=cycle_start+1;i<n;i++)
            {
                if(arr[i]<temp)
                  position++;
            }
           
        // ignore all duplicate  elements
            while(temp==arr[position])
                position++;
           
         // put the temp to it's right position  
             if(temp!=arr[position])
             {
                swap(temp,arr[position]);
                writes++;
             }
       }  
    }

    cout<<"memory writes = "<<writes<<endl;

}

 int main()
 {
    int arr[]={2,8,4,69,7,5,3,8,42,5,9,4,0,3,4};

    int n=sizeof(arr)/sizeof(arr[0]);

     cycle_sort( arr, n);

   cout<<"sorted array is "<<endl;

   for(int x :arr)
    {
        cout<<x<<" ";
    }



 }