
#include<bits/stdc++.h>
using namespace std;


// T.C-> O(n^2)
// it is stable sorting algortithm and inplace (not using extra space,only changing in the original array)

void bubblesort(int arr[],int n)
{
  
    for(int i=0;i<n-1;i++)
    {
          bool swapped=false;
        for(int j=0; j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                swapped=true;

            }

           
        }
         if(swapped==false)
               break;
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

    bubblesort(arr,n);
    cout<<"sorted array is : ";
    for(int x :arr)
    {
        cout<<x<<" ";
    }
}