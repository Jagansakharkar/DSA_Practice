
#include <iostream>
using namespace std;

struct TreeNode {
    int data;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int d) {
        data = d;
        left = nullptr;
        right = nullptr;
    }
};


void inOrder(TreeNode* node)
{
 if(node==nullptr) return;

// traverisng left
 inOrder(node->left);
 // parent
  cout<<node->data<<"->";
 // traversing right
 inOrder(node->right);
}

void preOrder(TreeNode* node)
{
 if(node==nullptr) return;

 // parent
  cout<<node->data<<"->";
// traverisng left
 inOrder(node->left);
 // traversing right
 inOrder(node->right);
}

void postOrder(TreeNode* node)
{
  
 if(node==nullptr) return;

// traverisng left
 inOrder(node->left);
 // traversing right
 inOrder(node->right);
 // parent
  cout<<node->data<<"->";
}



int main() {
    // Create the root node
   TreeNode* root = new TreeNode(1);
  root->left = new TreeNode(12);
  root->right = new TreeNode(9);
  root->left->left = new TreeNode(5);
  root->left->right = new TreeNode(6);

 cout<<"InOrder Traversing :";
  inOrder(root);

  cout<<"\nPostOrder Traversing :";
  postOrder(root);

  cout<<"\nPreOrder Traversing :";
  preOrder(root);
    return 0;
}

