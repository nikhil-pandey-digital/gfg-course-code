#include <bits/stdc++.h>
using namespace std;

struct node
{
  int data;
  node* next;
  
  node(int x)
  {
   data=x;
   next=NULL;
  }

};

node* insert_position(node* Head,int data,int pos)
{
    node* temp=new node(data);

    if(Head==NULL)
    {
        return temp;
    }

    if(pos==1)
    {
        temp->next=Head;
        return temp;
    }
   
    node* curr=Head;
    int p=1;

    while(p<pos-1 && curr->next!=NULL)
    {
        p++;
        curr=curr->next;
    }

    if(p==pos-1)
    {
       temp->next=curr->next;
       curr->next=temp;
       return Head;
    }
    
   return Head;
}

int main() {
  node* Head=NULL;

  Head=insert_position(Head,10,1);
  Head=insert_position(Head,20,2);
  Head=insert_position(Head,30,1);
  Head=insert_position(Head,40,3);
  Head=insert_position(Head,50,3);
  Head=insert_position(Head,60,7);

  node* current = Head;
  while(current!=NULL)
  {
      cout<<current->data<<" -> ";
      current=current->next;
  }

}