
#include <iostream>
using namespace std;


//neive solution:-
//T.C->O(n^2);

int one_odd(int arr[], int n)
{

    int count = 0;

    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < n; j++)
        {

            if (arr[i] == arr[j])
                count++;
        }

        if (count % 2 != 0)
            return arr[i];
    }
    return 0;
}

// more otimised and efficient approach:-
//by using properties of xor operator:-
//T.C-.O(n)
//S.C->O(1)
int one_odd_1(int arr[], int n)
{

int ans=0;
for(int i=0;i<n;i++){
    ans=ans^arr[i];//is se jo even no of occurances wale no hai wo cancel kar denge apne app ko and hamare pass odd occurance walle bach jayenge no.
}
  return ans;
}



int main()
{

    int n;
    while (1)
    {

        cin >> n;

        if (n == 0)
            exit(1);

        int arr[n];

        cout << "enter the elements of array" << endl;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int a= one_odd_1(arr,n);
        cout<<"elements which occurs odd time is->"<<a<<endl;
        cout<<endl<<"enter 0 to exit";
    }
}


//varitian question:-
/*
given an array of n numbers that has values in range [1...n+1]. Every no appears exactly once .
hence one no. is missing . find the missing no.
I/P: arr[]={1,4,3}
O/P: 2
I/P: arr[]={1,5,3,2}
O/P: 4
*/

//solution of question:-
/*
int main(){
    int n;
    cin>>n;
    int arr[n];

   
     cout << "enter the elements of array" << endl;
     for (int i = 0; i < n; i++)
     {
         cin >> arr[i];
     }

   int ans=0;

    for(int i=1; i<=n+1;i++){
       
       ans=ans^i;
    }
    for(int i=0; i<n;i++){
        ans=ans^arr[i];
    }

 cout<<"mising element is ->"<< ans;
}
*/