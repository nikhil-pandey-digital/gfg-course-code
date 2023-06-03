#include<iostream>
using namespace std;

bool check_palindrome_string(string s,int first,int last){

 

  if(first>=last){
       return true;  
  }


  if((s[first]==s[last]) &&check_palindrome_string( s,first+1,last-1)) return true;
   
   else return false;
}

int main(){
    string s;
    cin>>s;
    int n=s.size();
   if( check_palindrome_string( s,0,n-1)){
       cout<<"it is palandrome!!"<<endl;
   }

   else{
        cout<<"it is not palandrome!!"<<endl;
   }
}