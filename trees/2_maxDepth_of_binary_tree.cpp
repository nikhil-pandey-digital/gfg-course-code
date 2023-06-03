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

int dfsHeight(node* root);

//depth of tree
 int depth(node* root)
 {
    if(root==NULL) return 0;

    int l=depth(root->left);
    int r=depth(root->right);

    return 1+max(l,r);
 }

 // check if tree is balanced or not 
 // tree is balanced if  abs(height(left)-height(right))<=1

 bool checkBalanceTree(node*root)
 {
       return (dfsHeight(root)!=-1);
 }

 int dfsHeight(node* root)
 {
    if(root==NULL) return 0;

    int l=dfsHeight(root->left);
    if(l==-1)return -1;

    int r=dfsHeight(root->right);
    if(r==-1)return -1;

    if(abs(l-r)>1)return -1;

    return 1+max(l,r);
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

cout<<checkBalanceTree(root);

}