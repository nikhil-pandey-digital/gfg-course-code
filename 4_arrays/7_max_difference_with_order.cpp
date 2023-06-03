#include <iostream>
#include <vector>

using namespace std;

//iska logic khud nahi kar paya , so do again

void max_diff(int arr[],int n){

int minele=arr[0];
int maxdif=arr[1]-arr[0];
int temp;

for(int i=1;i<n;i++)
{
   temp =arr[i]-minele;
    maxdif=max(maxdif,temp);
    if(arr[i]<minele){
        minele=arr[i];
    }
}

cout<<"max difference b/w elemnets is->"<<maxdif<<endl;

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
    max_diff(arr, n);

}