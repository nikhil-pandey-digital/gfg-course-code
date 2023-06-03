#include <iostream>
#include <vector>

using namespace std;

void stock_profit_max(int arr[],int n)
{
    int min=arr[0],profit=0;

    for(int i=1;i<n;){

        if(arr[i-1]<arr[i]){
            i++;
            if(i==(n-1)){
                profit+=(arr[i]-min);
            }
            
            if(i==n) break;
        }

        if(arr[i-1]>arr[i]){
            i--;
             profit+=(arr[i]-min);
             i++;
             min=arr[i];
             i++;
        }
    }

    cout<<"max profit->"<<profit<<endl;
    
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
    stock_profit_max(arr, n);

}