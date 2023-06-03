#include <iostream>
using namespace std;

//print first m , n-bonacci number
int sum(int arr[],int s)
{
    int ans=0;
    for(int i=0;i<s;i++)
    {
       ans+=arr[i];     
    }

    return ans;
}

void n_bonacci(int n, int m)
{
    int arr[n];
    for(int i=0;i<n-1;i++)
    {
        arr[i]=0;
        cout<<arr[i]<<" ";
    }

    arr[n-1]=1;
    cout<<arr[n-1]<<" ";

    int pointer=0,m_temp=n,next_term;
   
   while(m_temp<m)
   {
       next_term=sum(arr,n);
       arr[pointer]=next_term;
       cout<<next_term<<" ";
       pointer=(pointer+1)%n;
       m_temp++;
       
   }

}

int main()
{
    int n,m;
    cout<<"enter the n bonacci number "<<endl;
    cin>>n;
     cout<<"enter the number of terms you want of the series "<<endl;
     cin>>m;
     n_bonacci(n,  m);
}