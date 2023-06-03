/*
In this  question we have given an array , we need to find the maximun sum of subarrays possible including the circular subarrays.
*/

#include <iostream>
using namespace std;

// neive approch
//  t.c-> o(n^2)

int maximum_sum_circular_subarray_neive(int arr[], int s)
{
    int ans = arr[0];

    for (int i = 0; i < s; i++)
    {
        int curr_max = arr[i];
        int max_till_now = arr[i];

        // checking for each element of array by considering it as the starting element of subarray.
        for (int j = 1; j < s; j++)
        {
            // finding index for each element as it is circular array.
            int index = (i + j) % s;

            // applying the kadane's algorithm approch
            curr_max = max(arr[index], arr[index] + curr_max);

            max_till_now = max(curr_max, max_till_now);
        }
        if (max_till_now > ans)
            ans = max_till_now;
    }

    return ans;
}

// optimised approch
// t.c->O(n)

// logic:-
//   maximum_sum_circular_subarray= total_sum_array -  minimum_sum_normal_subarray.
// maximium sum= max( maximum_sum_circular_subarray, maximum_sum_normal_subarray).

int maximum_sum_circular_subarray_optimised(int arr[], int s)
{
    int minimum_sum_normal_subarray = arr[0];
    int maximum_sum_normal_subarray = arr[0];
    int min_so_far = arr[0], max_so_far = arr[0], current_min = arr[0], current_max = arr[0],total_sum_array=arr[0];

    // finding minimum_sum_normal_subarray.
    for (int i = 1; i < s; i++)
    {

        total_sum_array+=arr[i];
        current_min = min(arr[i], arr[i] + current_min);

        min_so_far = min(current_min, min_so_far);
    }

    minimum_sum_normal_subarray = min_so_far;

    // finding maximum_sum_normal_subarray
    for (int i = 1; i < s; i++)
    {
        current_max = max(arr[i], arr[i] + current_max);

        max_so_far = max(current_max, max_so_far);
    }

    maximum_sum_normal_subarray = max_so_far;

    //condition checking if all the elements are  negative
    if(total_sum_array==minimum_sum_normal_subarray)
         return maximum_sum_normal_subarray;
    
    
    int maximum_sum_circular_subarray =total_sum_array - minimum_sum_normal_subarray;

    int maximium_sum = max(maximum_sum_circular_subarray, maximum_sum_normal_subarray);

    return maximium_sum;
}

int main()
{
    int n;
    cout << "enter the size of array" << endl;
    cin >> n;
    int arr[n];
    cout << "enter the  elements of array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "maximum sum  of  array including circular subarray is " << maximum_sum_circular_subarray_optimised(arr, n) << endl;
}
