#include <iostream>
#include <vector>

using namespace std;

void freq(int arr[],int n){

int freq=1,flag=0,e=0;
int current_ele=arr[0];
for(int i=1;i<n;i++){

  if(current_ele==arr[i]){
      freq++;
      flag=0;
      e=0;
  }

  else{
    cout<<current_ele<<"->"<<freq<<endl;
    current_ele=arr[i];
    freq=1;
    flag=1;
    e=1;
  }

}

if(flag==0){
     cout<<current_ele<<"->"<<freq<<endl;
}

if(e==1){
     cout<<current_ele<<"->"<<freq<<endl;
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
    freq(arr, n);

}