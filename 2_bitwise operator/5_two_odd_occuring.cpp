
#include <iostream>
using namespace std;
#include<vector>

//neive solution:-
//T.C->O(n^2);

void two_odd(int arr[], int n)
{

 

    for (int i = 0; i < n; i++)
    {
           int count = 0;
         
        for (int j = 0; j < n; j++) 
        {

            if (arr[i] == arr[j])
                count++;
        }

        if (count % 2 != 0)
            cout<<arr[i]<<" ";
    }

}

//optimised->

 
 void two_odd1(int arr[],int n)
{
    int x=0;
    vector<int>set1;
    vector<int>set2;

  
    for(int i=0;i<n;i++){
        x=x^arr[i];
    }

    int sb=x&(~(x-1)); //first set bit from the right
    for(int i=0;i<n;i++){

        if((arr[i]&sb)!=0){
            set1.push_back(arr[i]);
        }
        else{
              set2.push_back(arr[i]);
        }
    }
 int x1=0; x=0;
     for(int i=0;i<set1.size();i++){
        x=x^set1[i];
    }
  
     for(int i=0;i<set2.size();i++){
        x1=x1^set2[i];
    }
cout<<"elements having odd  occurances->"<<x<<" "<<x1<<endl;

}


int main(){
    int n;
    cin>>n;
   int  arr[n];

   for(int i=0;i<n;i++){
       cin>>arr[i];
   }

two_odd1(arr,  n);


}