
#include <bits/stdc++.h>
using namespace std;

//effiecient approch:- by using prefix_sum and hasing

bool given_sum(vector<int>&arr,int sum)
{
   //logic:- let say we have a0,a1,a2,....,ai,ai+1,...aj,...an-1 as array element
   // let prefix_sum1=a0,a1,a2,....,ai
   // given sum= ai+1,...aj and  prefix_sum2=a0,a1..aj
   // then prefix_sum2=given sum+prefix_sum1
   // so if we search that prefix_sum1 is present in our prefix_sum table and
   // if it is present then we can say that subarray with given sum is present else it is not present . 

   int n=arr.size();
   unordered_set<int> prefix_sum_table;

   int prefix=0;

   for(int i=0;i<n;i++)
   {
    prefix+=arr[i];

    if(prefix_sum_table.find(prefix-sum)!=prefix_sum_table.end() || prefix==sum){
        return true;
    }
    else{
        prefix_sum_table.insert(prefix);
    }

   }
   return false;
}

int main() {

    int size;
    cout<<"enter the size of array"<<endl;
     cin>>size;
    
    int x;
    vector<int> arr;
    cout<<"enter the elements of array"<<endl;
    for(int i=0;i<size;i++) {
         
        cin>>x;
        arr.push_back(x);
   }
   
   int sum;
   cout<<"enter the sum"<<endl;
   cin>>sum;

   given_sum(arr,sum);

}