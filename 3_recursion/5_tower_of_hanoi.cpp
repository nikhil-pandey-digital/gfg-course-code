#include <iostream>

using namespace std;

void TOI(int n,char a,char b,char c){

if(n<1) return;
    
    


//  if(n==2){
//      cout<<"move disk"<<n-1<<"from"<<a<<"to"<<b<<endl;
//      cout<<"move disk"<<n<<"from"<<a<<"to"<<c<<endl;
//      cout<<"move disk"<<n-1<<"from"<<b<<"to"<<c<<endl;
//     return;
// }

TOI(n-1,a,c,b);
cout<<"move disk"<<n<<"from"<<a<<"to"<<c<<endl;
TOI(n-1,b,a,c);


}

int main(){
    int n;
    cin>>n;
    char a='A';
    char b='B';
    char c='C';
    TOI(n,a,b,c);
}