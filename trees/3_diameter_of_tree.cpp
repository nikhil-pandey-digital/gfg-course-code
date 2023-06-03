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

// find diameter of tree
 
int diameter(node*root,int& dia)
{
     if(root==NULL) return 0;

     int leftHeight= diameter(root->left,dia);
     int rightHeight=diameter(root->right,dia);

     dia=max(dia,leftHeight+rightHeight);

     return 1+max(leftHeight,rightHeight);

}
  



int main() {


}