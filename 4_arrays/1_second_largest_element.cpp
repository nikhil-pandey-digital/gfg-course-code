#include <iostream>
#include <vector>

using namespace std;

void second_largest(vector<int>& arr)
{
    int n=arr.size();
    int largest=0;
    int second_largest=1;

    for(int i=1;i<n;i++){
        if(arr[i]>arr[largest])
        {
            second_largest=largest;
            largest=i;
        }

        if(arr[i]<arr[largest]){
           if( arr[i]>=arr[second_largest]){
               second_largest=i;
           }
        }
    }

    if(arr[second_largest]==arr[largest]) cout<<"-1" <<endl;
    else cout<<second_largest<<endl;
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

second_largest(arr);

}