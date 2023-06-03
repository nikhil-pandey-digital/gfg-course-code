#include <iostream>
using namespace std;


int josephus(int n ,int k ){

if(n==1){
    return 0;
}

return ((josephus(n-1,k))+k)%n;

}


int main(){
    int n,k;
    cout<<"enter number of participants"<<endl;
    cin>>n;
   
   
   cout<<"enter number for participants killing"<<endl;
   cin>>k;

   int alive= josephus(n,k);
   cout<<"alive participant is no->"<<alive<<endl;
}