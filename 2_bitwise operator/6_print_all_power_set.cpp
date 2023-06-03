
#include <iostream>
#include <string>
#include <math.h>
using namespace std;

//by using bitwise operator:-

void get_power_set(string s)
{
    int n = s.length();
    int p = pow(2, n);

    for (int i = 0; i < p; i++)
    {

        for (int j = 0; j < n; j++)
        {

            if ((i & (1 << j) )!= 0)
            {
                cout << s[j];
            }
        }
        cout << endl;
    }
}

int main()
{
    string str;
  getline(cin,str);

   get_power_set(str);

    // cout<<"u entered "<<str;
}