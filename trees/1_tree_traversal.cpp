
#include <bits/stdc++.h>
using namespace std;

//tree node structure
struct node{
    int data;
    node* left,*right;

    node(int val)
    {
        data=val;
        left=right=NULL;
    }
};


//level order traversal;
// iterative;
 void level_order(node*root){

    if(root==NULL)
    {
        return;
    }
 
  queue<node*> q;
  q.push(root);

   while(!q.empty())
   {
        node* temp=q.front();
        q.pop();

        if(temp->left!=NULL) q.push(temp->left);
        if(temp->right!=NULL) q.push(temp->right);
        cout<<temp->data<<" ";

   }
     
     
 }

// iterative pre order traversal; DLR
  
  void it_pre_order(node* root)
  {
      if(root==NULL)
      {
        return;
      }

      stack<node*> st;
      st.push(root);

      while(!st.empty())
      {
          node* temp= st.top();
          st.pop();

          if(temp->right!=NULL) st.push(temp->right);
          if(temp->left!=NULL) st.push(temp->left);

          cout<<temp->data<<" ";

      }
     
  }


// iterative in order traversal LDR;
     
     void itr_in_order(node* root)
     {
          if(root==NULL)
           return ;

           stack<node*>st;

           while(true)
           {  
            if(root!=NULL)
            {
              st.push(root);
              root=root->left;

            }

            else{
                 if(st.empty()) break;
            
                 node* temp=st.top();
                 st.pop();
                 cout<<temp->data<<" ";
                 root=temp->right;

            }
              
             
           }
     }

   //iterative post order using two stack  
    void it_post_order(node* root)
    {

      if (root== NULL) return;

         stack<node*>s1;
         stack<node*>s2;

   
         s1.push(root);

         while(!s1.empty())
         {
             node*temp=s1.top();
             s1.pop();
             s2.push(temp);

             if(temp->left!=NULL) s1.push(temp->left);
             if(temp->right!=NULL) s1.push(temp->right);

         }

         while(!s2.empty()){
            cout<<s2.top()->data <<" ";
            s2.pop();
         }

    }

// pre in post order traversals in one go
   
    void all_traversal(node* root)
    {
        if(root == NULL) return;

        stack<pair<node*,int>> st;
        vector<int> pre;
        vector<int> post;
        vector<int> In;
        st.push({root,1});

        //pair<node*,int> temp;
        while(!st.empty())
        {    
              auto temp= st.top();
              st.pop();

              // if num ==1 then  insert it's value in pre order  and re insert it in stack by doing num++
              // if temp.first->left exists then insert it in stack
              if(temp.second==1)
              {
                  pre.push_back(temp.first->data);
                  
                  temp.second++;

                  st.push(temp);

                  if(temp.first->left !=NULL)
                  {
                     st.push({temp.first->left,1});
                  }
                  
              }

              //if num==2 then  insert it's  value in INorder  and re insert by doing num++
              // if temp.first->right exists then insert it 
              else if(temp.second==2)
              {
                In.push_back(temp.first->data);
               
                temp.second++;
                 st.push(temp);

                  if(temp.first->right !=NULL)
                  {
                     st.push({temp.first->right,1});
                  }
              }

              //if num==3 then  insert it's  value in post order  and delete it permanently
              
              else
              {
                post.push_back(temp.first->data);

              }



        }

        cout<<"pre order:-"<<endl;
        for(auto x:pre)
         cout<<x<<" ";

         cout<<"IN order:-"<<endl;
        for(auto x:In)
         cout<<x<<" ";

        cout<<"post order:-"<<endl;
        for(auto x:post)
         cout<<x<<" ";

        
    }


int main() {
 
 node* root=new node(1);
 root->left=new node(2);
 root->right=new node(3);
 root->left->left=new node(4);
 root->left->right=new node(5);
 root->left->right->left=new node(6);
 root->right->left=new node(61);
 root->right->right=new node(71);
 root->right->left->right=new node(7);
 root->right->left->right->right=new node(8);

it_pre_order(root);
 cout<<endl;
itr_in_order(root);
 cout<<endl;

it_post_order(root);
 cout<<endl;

all_traversal(root);

}
