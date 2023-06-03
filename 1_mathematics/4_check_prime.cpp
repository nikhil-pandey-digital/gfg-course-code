#include <iostream>
#include<cmath>
using namespace std;

bool neive_prime(int a){
    if(a==1)
     return false;

   for(int i=2;i<a;i++){
       if(a%i==0)
        return false;
   }  
  return true; 
}
//t.c-> O(n-2),omega(1)


//there are some test cases not satisfied from this approach
// wrong logic
bool prime(int n){

    if(n==2||n==3)
     return true;
     if((n-1)%6==0) 
      return true;
     if((n+1)%6==0)
       return true; 
     else
      return false; 
}

/*optimised approach is based upon the logic of separating and grouping (x,y)all the factors of a number 'n'.
such that x*y =n
and x<y 
⁖ x*x<=n
⁖x<=√n
*/
//t.c->O(√n)
bool prime_optimised(int n){
    if(n==1)
     return false;
    
    else{
        for(int i=2;i<=sqrt(n);i++){
            if(n%i==0)
             return false;
        }
        return true;
    }  
}

//----------------------------------------------
bool prime_more_optimised(int n){
    if(n==1)
     return false;
    if(n==2||n==3)
     return true;

    if(n%2==0||n%3==0)
     return false; 
    
    else{
        for(int i=5;i<=sqrt(n);i+6){
            if(n%i==0||n%(i+2))
             return false;
        }
        return true;
    } 
}
//t.c->it is 3x faster than the previous version.
//-----------------------------------------------
int main()
{
    while(1){
    int a;
    cin >> a ;
    if(a==0)
     exit(1);
    int ans = prime_more_optimised(a);

    if(ans==1)
    cout  << a<<"is prime"<< endl;
    else
     cout  << a<<"is not prime"<< endl;


    cout<<"for quiting enter 0"<<endl;
    

    }
}