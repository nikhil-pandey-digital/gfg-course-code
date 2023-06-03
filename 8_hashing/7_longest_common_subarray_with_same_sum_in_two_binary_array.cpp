
#include <bits/stdc++.h>
using namespace std;

 //this problem can be  reduced to longest subarray with zero sum.
 // step 1 :- compute the diff array
 //  step 2:- find the longest subarray with zero sum in the diff array


      int longest_subarray_with_zero_sum(vector<int>&diff,int sum)
      {
        int ans=0,n=diff.size();
        int prefix=0;
        unordered_map<int,int> table;

       
       for(int i=0;i<n;i++)
       {
           prefix+=diff[i];
           if(prefix==0  )
           {
              ans=max(ans,i+1);
           }

           if(table.find(prefix)!=table.end())
           {
               ans=max(ans,i-table[prefix]);

           }
           else{
            table.insert({prefix,i});
           }

       }

       return ans;
         
      }

   int helper(vector<int>& arr1,vector<int>& arr2)
   {
        int n = arr1.size();

        vector<int> diff(n);

        for(int i=0;i<n;i++)
        {
            diff[i]=arr1[i]-arr2[i];
         
        }

        return longest_subarray_with_zero_sum(diff,0);
   }


int main() {
 
  int size;
  cout<<"enter the size of array"<<endl;
   cin>>size;
  
  int x;
  vector<int> arr1;
  cout<<"enter the elements of array"<<endl;
  for(int i=0;i<size;i++) {
       
      cin>>x;
      arr1.push_back(x);
 }

  vector<int> arr2;
  cout<<"enter the elements of second array"<<endl;
  for(int i=0;i<size;i++) {
       
      cin>>x;
      arr2.push_back(x);
 }

   cout<<helper(arr1,arr2)<<endl;;

}