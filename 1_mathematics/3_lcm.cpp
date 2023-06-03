#include <iostream>
using namespace std;

// FORMULA==>  l.c.m*g.c.d = a*b

int optimised_gcd_euclidian(int a,int b){
    if(b==0)
     return a;
    else
    return  optimised_gcd_euclidian(b,a%b) ;
}

int lcm(int a,int b){
    int gcd=optimised_gcd_euclidian(a,b);
    return (a*b)/gcd;
}

int main()
{
    int a, b;
    cin >> a >> b;
    int ans = lcm(a, b);
    cout << "lcm is " << ans << endl;
}