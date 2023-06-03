#include <iostream>
using namespace std;


// by using bryan karningum algo:-
void checkpow(int n){
int count=0;

while(n>0){
    n=n&(n-1);
    count++;
}
if(count==1) cout<<"yes";

else cout<<"no";
}

//-----------------------------
//more optimised:-

int checkpow1(int n){

if(n==0) return 0;

return ( (n&(n-1))==0);
}
//-----------------------------

int main(){
    int n;
    while(1){
        cin>>n;

        if(n==-1) exit(1);

        int a=checkpow1(n);
     
     if(a==1) cout<<"yes";

       else cout<<"no";

        cout<<endl<<"enter -1 to exit";
    }
}