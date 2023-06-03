#include <iostream>
#include <vector>

using namespace std;

void sol(int arr[], int n)
{

    int prev = arr[0];
    int current, size = 1;

    for (int i = 1; i < n; i++)
    {

        current = arr[i];

        if (prev != current)
        {
            arr[size]=current;
            size++;
            prev=current;
        }
    }
    size--;

    cout<<"new array ->";
    for(int i=0;i<=size;i++){
        cout<<arr[i]<<" ";
    }

      cout<<"new size is->"<<size;

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
    sol(arr, n);
}