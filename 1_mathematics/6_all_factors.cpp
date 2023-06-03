#include <iostream>
#include <cmath>
using namespace std;

void all_factors(int n){
    int i;
    for(i=1; i*i<=n; i++){
        if(n%i==0){
            cout<<i<<" ";
        }
    }
     i=i-1;
     int p;
    for(;i>=1;i--){
        if(n%i==0){
         p=n/i;
         cout<<p<<" ";
        }
    }
}

int main()
{
    int n;
    while (1)
    {
        cin>>n;
        if (n == 0)
            exit(1);

        all_factors(n);
        cout << "enter 0 to exit" << endl;
    }
}