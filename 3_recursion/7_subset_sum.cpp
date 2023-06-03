#include <iostream>
#include <vector>

using namespace std;

//first approach:-
//there is some problem with this method
  int sum_subset(int set[],vector <int>& subset,int sum,int n,int l=0)
  {
      if(sum=0) return 1;
  
  int s=0;
    if(l==n)
    {
      
        for(int x:subset){
                s+=x;
        }
   return (s==sum)?1:0;
    }

    int a= sum_subset( set ,subset,sum,n,l+1);
     
       subset.push_back(set[l]);
    int b=sum_subset(set,subset,sum,n,l+1);
  
  return a+b;
  }

//second approach:
//it is working fine
int sum_subset_2(int set[],int sum,int n){

    if(sum==0) return 1;

if(n==0){
    return (sum==0)?1:0;
}
    return sum_subset_2(set,sum,n-1)+sum_subset_2(set,sum-set[n-1],n-1);
}




int main(){

    int n;
    cout<<"enter the size of set"<<endl;
    cin>>n;
    int set[n];
   cout<<"enter the set elements"<<endl;

    for(int i=0;i<n;i++){
          cin>>set[i];
    }
     cout<<"enter the sum "<<endl;
     int sum;
     cin>>sum;

    vector<int> subset{0};
   int ans= sum_subset(set,subset,sum,n);
    cout<<"sets having sum ="<<sum<<"are->"<<ans<<endl;

    
}
