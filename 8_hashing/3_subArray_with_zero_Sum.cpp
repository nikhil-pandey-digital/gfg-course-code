#include <bits/stdc++.h>
using namespace std;

//effiecient approch:- by using prefix_sum and hasing

bool zero_sum(vector<int>& arr)
{
    int n=arr.size();
    
    unordered_set<int> table;

    int prefix_sum=arr[0];

     table.insert(prefix_sum);
    //compute prefix sum
    for(int i=1;i<n;i++)
    {
         prefix_sum+=arr[i];
    // check if prefix sum is already in our hashtable if yes then return true else insert it into hashtable
         if(table.find(prefix_sum)!=table.end() || prefix_sum==0)
            return true;

         else{
          table.insert(prefix_sum);
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
  for(int i=0;i<size;i++)
  {
     cin>>x;
     arr.push_back(x);

  }

  cout<< zero_sum( arr)<<endl;




}