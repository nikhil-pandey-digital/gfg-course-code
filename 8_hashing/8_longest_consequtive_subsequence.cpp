#include <bits/stdc++.h>
using namespace std;

//O(logn) solution:-
 
 //using sorting
 int solve(vector<int>& arr)
 {
     sort(arr.begin(),arr.end());

     int res=0,curr=1;

     for(int i=1;i<arr.size();i++)
     {
        if(arr[i]==arr[i-1]+1)
        {
            curr++;
        }
        else if(arr[i]!=arr[i-1]+1){
             
             res=max(res,curr);
             curr=1;
        }
     }
     return res;
 }

 //optimised approch:-
 // approch:-
   // stroe all elements of array  in   hashtable
   // perform 2n look up in the hashtable for each element

   int solve_optimised(vector<int>& arr)
   {
    unordered_set<int> table;
       int res=0,curr=0;
      
//inserting in the table
       for(auto x: arr)
       {
       table.insert(x); 
       }
// doing 2n look up
       int i=1;
      for(auto x: table)
      {
         if(table.find(x-1)!=table.end())
         {
            continue;
         }
         else if(table.find(x-1)==table.end())
         {  
            curr++;
            while(table.find(x+i)!=table.end())
            {
                curr++;
                i++;
            }

            res=max(res,curr);
            i=1;
            curr=0;
         }


      }

      return res;

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

 cout<<solve(arr)<<endl;
 cout<<solve_optimised(arr);

}