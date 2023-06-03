/*
In this question we have to find
 the size of max. subarray of consequitive even-odds/odds-even in a array.
*/

#include <iostream>
using namespace std;


//very lengthy code 
//this is a bad engineer's code
int even_odd_subarray(int arr[], int s)
{
    int max = 1, temp = 1, n = arr[0], flag;

    for (int i = 0; i < s- 1; )
    {
        n = arr[i];
        if (n % 2 == 0)
        {

            if (arr[i + 1] % 2 != 0)
            {

                temp += 1;
                i += 1;

               
                flag = 0;
            }
            else
            {
                if (temp > max)
                    max = temp;

                temp = 1;
                flag = 1;
            }
        }

        if (n % 2 != 0)
        {
            if (arr[i + 1] % 2 == 0)
            {
                temp += 1;
                i += 1;

                
                flag = 0;
            }
            else
            {
                if (temp > max)
                    max = temp;
                temp = 1;
                flag = 1;
            }
        }

        if (temp > max)
            max = temp;
        if (flag == 1)
            i++;
    }

    return max;
}

//same logic in minimum lines:-
//this is a good engineer's code
int even_odd_subarray_1(int arr[], int s){

int temp=1,maxx=1;

for(int i=1;i<s;i++){

    if((arr[i]%2==0 && arr[i-1]%2!=0)||(arr[i]%2!=0 && arr[i-1]%2==0))
    {
        temp++;
        maxx=max(temp,maxx);
    }
    else
     temp=1;
}
return maxx;
}



int main()
{
    int n;
    cout<<"enter the size of array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter the  elements of array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    cout<<"maximum size of array is "<<even_odd_subarray_1(arr, n)<<endl;
}