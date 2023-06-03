#include <bits/stdc++.h>
using namespace std;

 //    Q1-> we will be given a sorted array and a sum we  need to find the pair which have that sum in the array

// neive approch using nested for loops t.c-> O(n^2)     s.c->O(1)   here we don't need to sort the array 

//optimised approch using hashtable  t.c-> O(n)  s.c->(n)  here we don't need to sort the array . 
// it is the best sol. if we have given an unsorted array

//best approch we use two pointer approch but we need a sorted array , T.c-> O(n) s.c->O(1)

pair<int,int > find_pair(int arr[],int l,int r, int sum)
{
    // int l=0,r=n-1;
      pair<int,int> ans={0,0};

      
     while(l<r)
     {
         if((arr[l]+arr[r])==sum)
            {
             ans.first=arr[l];
             ans.second=arr[r];
             return ans;
            }

        else if((arr[l]+arr[r])>sum){
               r--;
                
            }
         else{
             l++;
         }   
     }
     return ans;
}

//--------------------------------------------------------------------------------------------

// Q2-> we will be given a sorted array and a sum we  need to find the TRIPLET which have that sum in the array 

   //we will apply find pair for each element in the array t.c-> O(n^2)
   //there is some bug in this function
  pair<int ,pair<int,int> > find_triplet(int arr[],int n, int sum)
  {
      pair<int,pair<int,int>> ans={0,{0,0}};
      pair<int,int> temp;
        for(int i=0;i<n-2;i++)
        {
           temp=find_pair( arr,(i+1), (n-1), (sum-arr[i]));
           if(temp.first!=0){
               ans.first=arr[i];
               ans.second=temp;
               return ans;
           }
        }
   return ans;
  }

  int main()
{
    int n;

    cout<<"enter the size"<<endl;
    cin>>n;

    int arr[n];

   cout<<"enter the elements of  array"<<endl;
 
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    cout<<" enter the pair sum to find "<<endl;
    int sum;
    cin>>sum;

     pair<int,pair<int,int>> ans= find_triplet(arr,n, sum);

     if(ans.first==0)
       {
           cout<<"there is no triplet possible"<<endl;

       }
     else{
         cout<<"triplet is "<<ans.first<<" "<<ans.second.first<<" "<<ans.second.first<<endl;
     }  

     pair<int,int> p=find_pair(arr, 0,n-1,sum);

     if(p.first==0)
       {
            cout<<"there is no pair possible"<<endl;

        }
      else{
          cout<<"pair is "<<p.first<<" "<<p.second<<endl;
     }  
}    