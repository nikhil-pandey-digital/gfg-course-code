#include <iostream>
using namespace std;

int pow(int b, int p)
{
    int res = 1;
    if (p == 0)
        return 1;
    while (p > 0)
    {

        if (p % 2 != 0)
        {
            res = res * b;
        }

        b = b * b;
        p = p / 2;
    }

    return res;
}
//this logic is not fast as we are using pow function to calculate the temp ;
void bit_set_or_not(int n, int k)
{
    int temp = pow(2, k - 1);
    if (n & temp >= 1)
        cout << "yes";
    else
        cout << "no";
}

//second approach :-
//by using << operator
void bit_set_or_not_1(int n, int k)
{
    //int temp=pow(2,k-1);
    if (n & (1 << (k - 1)) != 0)
        cout << "yes";
    else
        cout << "no";
}

//third approach :-
//using >> operator
void bit_set_or_not_2(int n, int k)
{
    //int temp=pow(2,k-1);
    if (1& (n >>(k - 1)) != 0)
        cout << "yes";
    else
        cout << "no";
}

int main()
{
    int t, n, k;
    cin >> t;
    while(t>0){
     
     cin>>n >> k;
     bit_set_or_not_1(n,k);
      t--;
    }

}