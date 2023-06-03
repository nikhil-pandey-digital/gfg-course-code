#include <iostream>
#include <vector>

using namespace std;

//-----------------------------------------------------
//left rotate by 1:-
void left_rotate(vector<int>& arr){
    int temp=arr[0];
   int n=arr.size();
    for(int i=0;i<n;i++)
    {
        arr[i]=arr[i+1];
    }
    arr[n-1]=temp;

    cout<<"resulted array is ->";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
//-----------------------------------------------------
//left rotate by d:-

//s.c-> theta(d);
//t.c-> theta(n);
void left_rotate(vector<int>& arr,int d){
    int temp[d];
    
   int n=arr.size();

   for(int i=0; i<d;i++){
       temp[i]= arr[i];
   }

    for(int i=0,j=d;j<n;i++)
    {
        arr[i]=arr[j];
        j++;
    }

      for(int i=n-d,j=0; i<n;i++){

         arr[i]=temp[j];
         j++;
   }

    cout<<"resulted array is ->";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

//optimised approch:-


//t.c-> theta(n)
//s.c-> theta(1)
void reverse(vector<int>& arr,int low,int high);

void left_rotate_optimised(vector<int>& arr,int d)
{
       
   int n=arr.size();
    reverse(arr,0,d-1);
    reverse(arr,d,n-1);
    reverse(arr,0,n-1);

 cout<<"resulted array is ->";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}

 void reverse(vector<int>& arr,int low,int high){
    while(low<high)
    {
        swap(arr[low],arr[high]);
        low++;
        high--;
    }
}

//--------------------------------------------------------------------


int main()
{
    int n,x,d;
    cin >> n;
    vector<int> arr;

    for (int i = 0; i < n; i++)
    {
        cin >> x;
        arr.push_back(x);
    }
    cout<<"for how many times u want to rotate:-";
    cin>>d;
    left_rotate_optimised(arr,d);
}