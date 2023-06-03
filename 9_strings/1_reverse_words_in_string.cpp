/* 
you are given a string you need to reverse the order of words in the string implace
for eg:-
  str->"welcome to gfg"
  o/p-> "gfg to welcome"
*/

#include <bits/stdc++.h>
using namespace std;

//approch:-
// first reverse each word then reverse the whole string 

  void reverse_word(string& str)
  {
      int n=str.size();  

      int start=0;
      for(int end=0;end<n;end++)
      {
        if(str[end]==' ')
        {
            reverse(str.begin()+start,str.begin()+end);
            start= end+1;
        }
        

      }
   
   reverse(str.begin()+start,str.begin()+n);

   reverse(str.begin(),str.end());

   for(auto x:str)
   {
    cout<<x;
   }

  }

int main() {

    string s;
    cout<<"enter the words of string"<<endl;
    getline(cin,s);

    //cout<<"size of string is "<<s.size()<<endl;

    reverse_word(s);

}