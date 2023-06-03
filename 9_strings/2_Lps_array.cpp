//Lps array-> Longest proper prefix suffix array
// "abcd" proper prefix-> " ", a ,ab, abc, 
// suffix-> " ", d,cd,bcd

#include <bits/stdc++.h>
using namespace std;

void Lps (string& str)
{
    int n=str.size();
    vector<int>Lps(n);

   string pre,suf;
   int res;
    for(int i=0;i<n;i++)
    {
        pre="",suf="",res=0;

       for(int p=0,s=i;p<i;p++)
       {
           pre+=str[p];
           suf=str[s]+suf;

           if(pre==suf)
           {
               int curr=pre.length();
              res=max(res , curr);
           }

             s--;
       }

       Lps[i]=res;

    }

    for(auto x:Lps)
      cout<<x<<" ";
}

int main() {
  string s;
 cout<<"enter the string"<<endl;
 cin>> s;

 Lps(s);

}