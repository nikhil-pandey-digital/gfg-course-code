
#include<iostream>
using namespace std;



//neive approch 
// t.c->O(n^2)

int max_subarray(int arr[],int n)
{
int max=-9999999;
int current_sum=0;

for(int i=0;i<n;i++)
{
    for(int j=i;j<n;j++){
        current_sum+=arr[j];

        if(max<current_sum)
           max=current_sum;
    }
    current_sum=0;
}
 
 return max;

}

//optimised approch
//t.c->O(n)


int max_subarray_optimised(int arr[],int n)
{
int max=arr[0];
int sum_all=arr[0];
int current=arr[0];

for(int i=1;i<n;i++)
{
  current=arr[i];
 // max+=current;



      sum_all+=current;

      if(max<sum_all){
          max=sum_all;
      }

      if(sum_all<current){
          sum_all=current;
      }

      if(max<sum_all){
          max=sum_all;
      }

}
 
 return max;

}

/*
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

    cout<<"maximum sum of subarray is"<<max_subarray_optimised(arr,n)<<endl;
}
*/
// C++ program to print largest contiguous array sum


int maxSubArraySum(int a[], int size)
{
	int max_so_far = INT_MIN, max_ending_here = 0;

	for (int i = 0; i < size; i++)
	{
		max_ending_here = max_ending_here + a[i];
		if (max_so_far < max_ending_here)
			max_so_far = max_ending_here;

		if (max_ending_here < 0)
			max_ending_here = 0;
	}
	return max_so_far;
}

/*Driver program to test maxSubArraySum*/
int main()
{
	int a[] = {-2, -3, 4, -1, -2, 1, 5, -3}
;
	int n = sizeof(a)/sizeof(a[0]);
	int max_sum = maxSubArraySum(a, n);
	cout << "Maximum contiguous sum is " << max_sum<<endl;
	cout << "Maximum contiguous sum is " <<  max_subarray_optimised( a,n);
	return 0;
}


