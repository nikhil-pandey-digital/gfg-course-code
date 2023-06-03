#include <iostream>
using namespace std;

//neive solution by me :-
//t.c -> theta(no. of bits in binary representation)
void count_set(int n){
    int ans=0;
    while(n|1!=1){
        if(n&1!=0)  ans++;
          
       n=n>>1;    
    }
    if(n&1==1)  ans++;

   cout<<"no. of set bits ="<<ans;  
   
}

//optimised solution:-
//brian kerningam's algorithm:-
//t.c-> theta(no. of set bits)
void count_set_1(int n){

 int ans=0;

 while(n>0){

     n=(n&(n-1));
     ans++;
 }
 
 cout<<"no. of set bits ="<<ans;  

}

//there is also one another approach approach that do this in constant  time after some pre computations
// this method is called lookup table method for 32-bit or 64-bit
// In this method we pre compute the values of set bits of each no. that can be represented in 32-bit and store them in a table 
// and than we access them 8 bit by bit from the table and add them to get the ans.
//for more info  refer to gfg course.

int main(){
    int n;
    
    while(1){
        cin>>n;
        count_set_1(n);
    }
}