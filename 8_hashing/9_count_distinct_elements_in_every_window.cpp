#include <bits/stdc++.h>
using namespace std;

//O(n)

void solve(vector<int>& arr,int k)
{
     int size=arr.size();

     unordered_map<int,int> freq_table;
     int i;
     for( i=0;i<k;i++)
     {  
        if(freq_table.find(arr[i])==freq_table.end())
         freq_table.insert({arr[i],1});

         else{
            freq_table[arr[i]]++;
         }
     }

    
     
     cout<<freq_table.size()<<" "<<endl;
     int j=0;

     while(i<size)
     {  
        
       //handling the element to be included in window
        if(freq_table.find(arr[i])!=freq_table.end())
        {
             freq_table[arr[i]]++;
        }

        else{
          freq_table.insert({arr[i],1});  
        }

      //handling element to be excluded from window
        freq_table[arr[j]]--;
        if(freq_table[arr[j]]==0)
        {
            freq_table.erase(arr[j]);
        }
        j++;
        i++;
    

        cout<<freq_table.size()<<" ";
     }


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

 int k;
 cout<<"enter value of k"<<endl;
 cin>>k;

 solve(arr,k);

}