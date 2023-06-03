#include <iostream>
#include <vector>
using namespace std;

//this algo is used to find all the prime no, upto n

void seive(int n)
{
    vector<bool> isprime(n + 1, true);
    for (int i = 2; i * i <= n; i++)
    {
        if (isprime[i])
        {
            for (int j = 2 * i; j <= n; j = j + i)
            {
                isprime[j] = false;
            }
        }
    }

    for (int i = 2; i <= n; i++)
    {
        if (isprime[i])
        {
            cout << i << " ";
        }
    }
}
//t.c->O(nloglogn)
//----------------------------------------
void seive_optimised(int n)
{
    vector<bool> isprime(n + 1, true);
    for (int i = 2; i * i <= n; i++)
    {
        if (isprime[i])
        {
            for (int j = i * i; j <= n; j = j + i)
            {
                isprime[j] = false;
            }
        }
    }

    for (int i = 2; i <= n; i++)
    {
        if (isprime[i])
        {
            cout << i << " ";
        }
    }
}

//----------------------

void seive_optimised_shorter(int n)
{
    vector<bool> isprime(n + 1, true);
    for (int i = 2; i <= n; i++)
    {
        if (isprime[i])
        {
            cout << i << " ";
            for (int j = i * i; j <= n; j = j + i)
            {
                isprime[j] = false;
            }
        }
    }
}

int main()
{
    int n;
    while (1)
    {
        cin >> n;
        if (n == 0)
            exit(1);

        seive_optimised_shorter(n);
        cout << "enter 0 to exit" << endl;
    }
}