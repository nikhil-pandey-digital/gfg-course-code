#include<iostream>
using namespace std;

//optimised approach:-
//moore's voting algorithm
//t.c-> O(n)
int majority(int arr[],int s)
{
  int res=0,count=1;

  //finding the potential candidate
  for(int i=1;i<s;i++){
    
    if(arr[res]==arr[i])
       count++;
    else
       count--;

    if(count==0){
        res=i;
        count=1;
    }      

  }

  //checking for the majority of the candidate
  count=0;
  for(int i=0;i<s;i++)
  {
      if(arr[res]==arr[i])
         count++;

  }

  if(count<=s/2)
     res=-1;//candidate is not in majority;

 return res;//returning the index of majority candidate.

}

int main()
{
    int n;
    cout << "enter the size of array" << endl;
    cin >> n;
    int arr[n];
    cout << "enter the  elements of array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "the index of the majority  element is " << majority(arr, n) << endl;
}
