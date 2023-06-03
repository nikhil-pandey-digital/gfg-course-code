#include <iostream>
#include <vector>

using namespace std;

//logic tere se bana nahi tha phir se try kar ise.

void movetoend(int arr[],int n )
{
    //int n=arr.size();
    int count=0;

   for(int i=0;i<n;i++){

       if(arr[i]!=0){
           swap(arr[count],arr[i]);
           count++;
       }
   }

    cout<<"resulted array is ->";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
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
    movetoend(arr, n);
}