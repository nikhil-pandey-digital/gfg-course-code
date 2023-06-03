
#include <iostream>
#include <math.h>
using namespace std;

//efficient approach:-
//trailing zeroes = floor(n/5)+floor(n/25)+floor(n/125)+......
//this method finds the no. of 5 as factor of a given no.
//as 5 and 2 makes the last digit o and there are less 5's than 2's as a factor so we focus on finding 5 as a factor.

int trailing(int n)
{
    int i = 1, count = 0;
    while (n / pow(5, i) > 0)
    {
        count = count + floor(n / pow(5, i));
        i = i + 1;
    }
    return count;
}

//simpler code
int trailing1(int n){
    int count=0;
    for(int i=5;i<=n;i=i*5){
       count=count+ n/i;
    }
    return count;
}

//time-complaxity is ⊝(log n) 
int main()
{
    int n;
    cout << "enter the no ." << endl;
    cin >> n;
    int a = trailing1(n);
    cout << "no. of trailing zeroes =" << a << endl;
}