#include <bits/stdc++.h>
using namespace std;

//logic:-same as subarray with given sum with some changes ,
//instead of using unordered set we use unordered map to store prefix sum as well its corresponding index in order to calculate the length of subarrays 

  int longest_subarray(vector<int>& arr ,int sum)
  {
     int n= arr.size();

     unordered_map<int,int> table;
     int prefix=0,ans=0;

     for(int i=0;i<n;i++)
     {
        prefix+=arr[i];

        if(table.find(prefix-sum)!=table.end())
        {
           ans=max(ans,i- table[prefix-sum]);
        }
        if(prefix==sum)
        {
            ans=max(ans,i+1);
        }

        else{
            table.insert({prefix,i});
        }
     }

     return ans;
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
     cout<<longest_subarray(arr ,sum);

   
    
}