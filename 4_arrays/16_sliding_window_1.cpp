#include <iostream>
using namespace std;

//problem:-
//you have given an array of integers and a number k , find the maximum sum of k consecutive elements.

int sliding_window(int arr[],int s,int k)
{
    int ans=INT_MIN,temp=0;

    for(int i=0;i<k;i++)
    {
           temp+=arr[i];
    }
    if(ans<temp)
       ans=temp;

    for(int i=k;i<s;i++)  
    {
        temp=temp-arr[i-k]+arr[i];
        ans=max(ans,temp) ;

    } 

    return ans;
}


//problem:-
//yu have given unsorted array of non-negative integers find if there is a subarray with given sum.

bool sliding_window_2(int arr[],int n,int sum)
{
      int cur_sum=arr[0],s=0;

      for(int e=1;e<n;e++)
      {
          //clear the prev window.
          while(cur_sum > sum && s<e-1)
          {
              cur_sum-=arr[s];
              s++;
          }

          if(cur_sum==sum)
             return true;

          if(e<n)
            cur_sum+=arr[e];   
      } 

      while(cur_sum > sum && s<n-1)
          {
              cur_sum-=arr[s];

              if(cur_sum==sum)
             return true;

              s++;
          }
       
        return(cur_sum==sum);
}


int main()
{
    int n,k;
    cout << "enter the size of array" << endl;
    cin >> n;
    int arr[n];
    cout << "enter the  elements of array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

     cout << "enter the sum " << endl;
     cin>>k;

     cout<<"ans is ->"<<sliding_window_2(arr,n, k)<<endl;

}
