#include <iostream>
#include <vector>

using namespace std;

//ye optimised approch hai , mere dimag me nahi aa paya tha , do it again,    
//mere dimag me n^2 wala approch aaya tha.


//t.c-> theta(n);

void leader(int arr[], int n)
{

    int curr_leader = arr[n - 1];

    cout<<curr_leader<<" ";

    for (int i = n - 2; i >= 0; i--)
    {
        if(arr[i]>curr_leader){
            cout<<arr[i]<<" ";
        }
    }
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
    leader(arr, n);
}