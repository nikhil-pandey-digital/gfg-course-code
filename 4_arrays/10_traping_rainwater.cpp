#include <iostream>
#include <vector>

using namespace std;

//merea solution hai jo  ki sahi nahi hai 

void rainwater(int arr[],int n)
{
    int i=0,j,water=0;

while(i<n){

    int pillar=arr[i];

    i=i+1;
    j=i;

    while(arr[j]<pillar){
        j++;
    }

   if(j>=n)
     break;

    pillar=min(arr[j],pillar);

    for(;i<j;i++)
    {
         water+=pillar-arr[i];
    }
    i=j;
}

cout<<"water="<<water;

}

//do it again

//efficient solution:

void rainwater1(int arr[],int n)
{
   int water=0;
   int lmax[n];
   int rmax[n];

   lmax[0]=arr[0];

   for(int i=1;i<n;i++){
       lmax[i]=max(lmax[i-1],arr[i]);
   }


   rmax[n-1]=arr[n-1];

   for(int i=n-2;i>=0;i--){
       rmax[i]=max(rmax[i+1],arr[i]);
   }

  

   for(int i=1;i<n-1;i++){
       water+=(min(lmax[i],rmax[i])-arr[i]);
   }

cout<<"water="<<water;

}




int main()
{
     int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    rainwater1(arr, n);

}