#include <bits/stdc++.h>
using namespace std;


//using map to store multiple values corresponding to a single key

// int main()
// {
//   map<int, vector<int>> m;

//   //  m[1].emplace_back(4);
//   //  m[1].emplace_back(2);
//   //  m[1].emplace_back(3);
//   //  m[2].emplace_back(4);
//   //  m[2].emplace_back(41);
//   //  m[2].emplace_back(42);
//   //  m[3].emplace_back(12);
//   //  m[4].emplace_back(23);
//   //  m[3].emplace_back(45);
//   //  m[3].emplace_back(46);

//   m[1].push_back(4);
//   m[1].push_back(41);
//   m[1].push_back(42);
//   m[2].push_back(43);
//   m[3].push_back(46);
//   m[2].push_back(47);
//   m[3].push_back(48);
//   m[2].push_back(45);

//   // cout<<m.size();

//   vector<int> temp;

//   //

//   map<int, vector<int>>::iterator itr;

//   // for (itr = m.begin(); itr != m.end(); itr++)
//   // {
//   //   cout << itr->first << " ";
     
//   //   for (auto x : itr->second)
//   //   {
//   //     cout << x << ",";
//   //   }

//   //   cout<<endl;
//   // }


// }

int main()
{
  // map<int,string> m;
  // m[1]="ab";
  // m[3]="ehj";
  // m[1]="abc";
  // m[2]="cde";

  // for(auto x:m)
  // {
  //   cout<<x.first<<" "<<x.second<<endl;
  // }

//output:-
// 1 abc
// 2 cde
// 3 ehj

// multimap <int,string> m;

//   m.emplace(1,"ac");
//   m.emplace(3,"ehj");
//   m.emplace(1,"abc");
//   m.emplace(2,"cde");

//    for(auto x:m)
//   {
//     cout<<x.first<<" "<<x.second<<endl;
//   }

//output
// 1 ac
// 1 abc
// 2 cde
// 3 ehj

vector<string> v;
v={"ac","abc","df","def"};

sort(v.begin(),v.end());

for(auto x: v)
{
   cout<<x<<" ";
}

}