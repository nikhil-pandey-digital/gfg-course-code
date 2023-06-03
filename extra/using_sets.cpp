#include<bits/stdc++.h>
using namespace std;

int main()
{
    set< pair<int,string>> s;
  
    s.insert({1,"ac"});
    s.insert({3,"cg"});
    s.insert({2,"bac"});
    s.insert({1,"abc"});
    s.insert({2,"baac"});

    for(auto x:s)
    {
        cout<<x.first<<" "<<x.second<<endl;
    }

     //output
     // 1 ac
     // 2 baac
     // 2 bac
     // 3 cg

   //properties of set:-
//    1) all the elements are in sorted order (sorting till depth of the element of set)
//    2) no dublicates can be present in the set 
//    3)  element are non-mutable although we can remove  the  old element insert  the new modified element


}