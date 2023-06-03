#include <bits/stdc++.h>
using namespace std;

//node structure:-
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


//inserting in linked list:-
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


// printing midddle element using fast and slow pointer approch 

  void print_middle(node* head)
  {
      node*slow=head,*fast=head;
     
       while(fast!=NULL && fast->next!=NULL)
       {
           fast=fast->next->next;
           slow=slow->next;
       }
       cout<<slow->data;

  }

int main() {



}