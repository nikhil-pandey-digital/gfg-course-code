#include <iostream>
using namespace std;

// given an array we have to find the equilibrium point in the array is present or not.

bool equilibrium_point(int arr[],int s)
{
    int sum=0;
    for(int i=0;i<s;i++)
    {
        sum+=arr[i];
    }
    int left_sum=0;
    for(int i=0;i<s;i++)
    {
        int right_sum=sum-arr[i];
        
        if(left_sum==right_sum)
         return true;

         left_sum+=arr[i];
         sum-=arr[i];

    }

    return false;
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

     cout <<   equilibrium_point( arr,n)<< endl;
  

}
