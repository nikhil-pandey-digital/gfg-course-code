#include <bits/stdc++.h>
using namespace std;


//neive approch
// T.c -> theta(√n)
int squareroot(int x)
{
     int i=1;
     while(!(i*i>x))
     {
         i++;
     }
      return i-1;
}

//optimised approch
//T.c-> O(logn) 
int squareroot_optimised(int x)
{
     int left=0,right=x;

     while(left<right)
     {
         int mid=(left+right)/2;

         if(mid*mid<=x)
         {
              if(mid*mid==x|| (mid+1)*(mid+1)>x)
              {
                  return mid;
              }
               
               else{
                   left=mid+1;
               }
         }
         else if(mid*mid>x)
         {
            right=mid-1;
         }
     }
}


int main()
{
    int num;
    cout<<"enter the number to calulate its square root"<<endl;
    cin>>num;
    cout<<"square root of "<<num<<"is "<<squareroot_optimised(num);
}