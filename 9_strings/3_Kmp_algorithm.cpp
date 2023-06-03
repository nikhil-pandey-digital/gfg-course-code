
// kmp algo is a linear time pattern searching in a string 

#include <bits/stdc++.h>
using namespace std;
 
  void compute_lps(vector<int>& lps , string& pat,int sizeOfPat)
  {
         int len=0,i=1;

        while(i<sizeOfPat)
         { 
           if(pat[i]==pat[len])
           {
              lps[i]=len+1;
              i++;
              len++;
           }
           else{

             if (len!=0){

              len=lps[len-1];
              
             }
             else{
               lps[i]=0;
               i++;
             }     
              
           }
            
         }
  }

void kmp(string& str, string& pat) 
{
     int n= str.length();
     int m= pat.length();

     vector<int> lps(m,0);
     int i=0,j=0;

     compute_lps(lps,pat,m);

     while(i<n)
     {
         if(str[i]==pat[j])
         {
            i++;
            j++; 
         }

         else{

            if(j==0)
            {
              i++;
            }

            else{
                j=lps[j-1];
            }

         }

         if(j==m)
         {
            cout<<i-j<<" ";
            j=lps[j-1];
         }
     }
}


int main() {
 
  string str;
  cout<<"enter the string "<<endl;
  cin>>str;

string p;
  cout<<"enter the pattern"<<endl;
  cin>>p;
 
 cout<<"pattern appear at following index"<<endl;

    kmp(str,p);


}