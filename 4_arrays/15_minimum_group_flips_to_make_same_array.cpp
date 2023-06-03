
#include <iostream>
using namespace std;

//problem:-
//you have given array in which there are either subgroups of '0' or '1' .
// you need to find the minimum group flips to make the array same.


//approch:-
/*
this problem is solved by considering the observation that :-
   1) either there would be the subgroups whose  frequency difference is 1
         OR
   2) there would be subgroups whose  frequency difference is 0 ,i.e no of subgroups of 0 and 1 are same.


   hence we will only  start printing  from the second subarray.    
*/

void minimum_group_flips(int arr[], int s)
{
    for (int i = 1; i < s; i++)
    {
        if (arr[i] != arr[i - 1])
        {

            if (arr[i] != arr[0])
            {
                cout << "from" << i << "to";
            }

            else
                cout << i - 1 << endl;
        }
    }

    if (arr[s - 1] != arr[0])
    {
        cout << s - 1 << endl;
    }
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
    minimum_group_flips(arr,n);
}
