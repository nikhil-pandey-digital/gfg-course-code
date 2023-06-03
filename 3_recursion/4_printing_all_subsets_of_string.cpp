#include <iostream>
#include <string>
using namespace std;

void string_subset(string current,string s,int l){

    if(l==s.length()){
        cout<<current<<",";
       // cout<<current+s[l-1]<<" ";
        return;
    }
  
  string_subset(current, s,l+1);
  current=current+s[l];
  string_subset(current, s ,l+1);

}

int main(){
    string s,current=" ";
    cin>>s;
     string_subset(current,s,0);
}