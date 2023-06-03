#include <iostream>
using namespace std;

int pow_neive(int b,int p){
    if(p==0)
     return 1;
    if(p==1){
        return b;
    } 
   int result=1;
   int m=p;
   while(m>=1){
         result=result*b;
         m--;
   }
   return result;

}
//t.c->O(n);
//-----------------------

//recursive optimised approach.
//it has s.c->O(log(n))
//it has T.c->O(log(n))
int pow(int b,int p){
    if(p==0)
     return 1;

    int temp=pow(b,p/2);
    temp=temp*temp;
    if(p%2==0)
      return temp;
    else
      return temp*b;   
}

// iterative optimised approach.
//it has s.c-> theta(1)
//it has T.c-> O(log(n))

int pow_iterative(int b,int p)
{ 
    int res=1; 
  while(p>0){
      if(p%2!=0){
         res=res*b;
      }
     
      p=p/2;
      b=b*b;
  }
  return res;
}

int main()
{
    int b,p;
    while (1)
    {
        cin >> b>>p;
        if (b == 0)
            exit(1);

        int  a =pow_iterative(b,p);
        cout << b<<"raise to the power "<<p<<"is ="<<a <<" "<<"enter 0 to exit" << endl;
    }
}