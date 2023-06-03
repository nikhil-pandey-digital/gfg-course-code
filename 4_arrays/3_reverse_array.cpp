#include <iostream>
#include <vector>

using namespace std;

void reverse(vector<int>& arr){

    int n=arr.size();
    int temp;

    for(int i=0,j=n-1;i<j;i++,j--){
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }


}

int main()
{
    int n; vector<int> arr;
    cin>>n;
    int temp;
    while(n>0){
     cin>>temp;
     arr.push_back(temp);
     n--;
    }

cout<<"original array is ->";
for(int x:arr)
  cout<<x<<" ";
  cout<<endl;
 reverse(arr); 
cout<<"revers array is ->";

for(int x:arr)
  cout<<x<<" ";

}
