
#include <bits/stdc++.h>
using namespace std;

//logic :- same as longest subarray with given sum 
// trick :- replace all 0 with -1 then the problem will convert to find longest subarray with zero sum


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

}