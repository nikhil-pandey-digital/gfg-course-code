#include<iostream>
using namespace std;

int sum_digits(int n){
     

      if(n<9){
          return n;
      }

    int l=n%10;

   
    n=n/10;
    return l+sum_digits(n);
}

int main(){
    int n;
    while(1){
    cin>>n;
    if(n==0) exit(1);

    int ans=sum_digits(n);
    cout<<"sum of digits of"<<n<<"is"<<ans<<endl;
    cout<<"enter 0 to exit"<<endl;
    }
    
}