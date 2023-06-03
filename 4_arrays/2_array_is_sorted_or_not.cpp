#include <iostream>
#include <vector>

using namespace std;

bool check(vector<int> arr){
    int n=arr.size();

    //int flag=0;
    for(int i=0;i<n-1;i++){

        if(arr[i]>arr[i+1]){
           return false;
        } 
    }

     return true;
    
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

cout<<check(arr)<<endl;

}