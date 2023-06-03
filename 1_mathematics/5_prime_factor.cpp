#include <iostream>
#include <cmath>
using namespace std;

bool isprime(int n)
{
    if (n == 1)
        return false;
    if (n == 2 || n == 3)
        return true;

    if (n % 2 == 0 || n % 3 == 0)
        return false;

    else
    {
        for (int i = 5; i <= sqrt(n); i + 6)
        {
            if (n % i == 0 || n % (i + 2))
                return false;
        }
        return true;
    }
}

//-------------------------------------------
void prime_factors(int n)
{
    for (int i = 2; i <= n; i++)
    {
        if (isprime(i))
        {
            int x = i;
            while (n % x == 0)
            {
                cout << i << " ";
                x = x * i;
            }
        }
    }
}
//t.c->O(n^2logn)
//---------------------------------------------

void prime_factors_optimised(int n)
{
    if(n<=1)return;

    while (n % 2 == 0)
    {
        cout << 2 << " ";
        n = n / 2;
    }

    while (n % 3 == 0)
    {
        cout << 3 << " ";
        n = n / 3;
    }

    for (int i = 5; i * i <= n; i=i + 6)
    {

        while(n % i == 0)
        {
            cout << i << " ";
            n = n / i;

        }

        
        while(n % (i + 2) ==0)
            {
                cout << i+2 << " ";
                n = n / (i+2);
            }
    }

    if(n >3)  cout<<n;
     
    
    
}

int main()
{
    int n;
    while (1)
    {
        cin>>n;
        if (n == 0)
            exit(1);

        prime_factors_optimised(n);
        cout << "enter 0 to exit" << endl;
    }
}