//chaining is a  collision resolution method 
// In this method ,the elements that face collision are chained one after other  under the common key 
// chaining can be implemented by various data structures such as:-
//    1. Linked list
//    2. dynamic sized array.
//    3. self balanced binary search tree

//implementation using linked list


#include <bits/stdc++.h>
using namespace std;

struct myhash {

    int bucket;

    list<int>*  table;

     void initialise(int b){
       bucket=b;
        table= new list<int>[b];
    } 

    void insert(int key)
    {
       int i= key%bucket;
       table[i].push_back(key);  

    }

    void remove(int key)
    {
        int i= key%bucket;
        table[i].remove(key);

    }

    bool search(int key)
    {
        int i= key%bucket;

        for(auto x:table[i])
        {
            if(x==key)
              return true;
            else
              return false;  
        }
      
    }
   
   void display()
   {
      for(int i=0;i<bucket;i++)
      {
        for(auto x: table[i])
           cout<<x<<"->";
         cout<<endl;  
      }
   }
      
};

int main() {
     
   myhash h1;
   h1.initialise(7);
   h1.insert(70);
   h1.insert(71);
   h1.insert(9);
   h1.insert(72);
   h1.insert(56);
   h1.display();



}

