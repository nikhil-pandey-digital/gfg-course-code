#include <algorithm>
#include <iostream>
using namespace std;

//neive approach:-
int neive_gcd(int a, int b)
{
    int ans = min(a, b);
    while (ans >= 1)
    {
        if (a % ans == 0 && b % ans == 0)
        {
            break;
        }
        ans--;
    }

  
    return ans;
}  
    //time-complaxity-O(min(a,b))  i.e O(n)

    //-------------------------------------------------
    /*there  is standard algorithm named euclidian algorithm for finding gcd of  two nuumbers most effeciently
it states that :-
if a and b are two numbers such that a>b than gcd(a,b) = gcd(a-b,b).

*/
//unoptimised implementation of euclidian algorithm.
int gcd_euclidian(int a,int b)
{
    while(a!=b){
        if(a>b)
          a=a-b;
        else
          b=b-a;  
    }
    return a;
}

//optimised gcd using euclidian algorithm

int optimised_gcd_euclidian(int a,int b){
    if(b==0)
     return a;
    else
    return  optimised_gcd_euclidian(b,a%b) ;
}

int main()
{
    int a, b;
    cin >> a >> b;
    int ans = optimised_gcd_euclidian(a, b);
    cout << "gcd is " << ans << endl;
}