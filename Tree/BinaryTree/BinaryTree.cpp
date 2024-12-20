#include <iostream>
using namespace std;

struct BinaryTreeNode {
    int data;
    BinaryTreeNode* left;
    BinaryTreeNode* right;

    BinaryTreeNode(int d) {
        data = d;
        left = right = nullptr;
    }
};

void printBinaryTree(BinaryTreeNode* parent, int depth = 0) {
    if (parent == nullptr) return;

    for (int i = 0; i < depth; i++) {
        cout << "  " << "->";
    }
    cout << parent->data << endl;

    printBinaryTree(parent->left, depth + 1);
    printBinaryTree(parent->right, depth + 1);
}

int main() {
    BinaryTreeNode* root = new BinaryTreeNode(1);
    root->left = new BinaryTreeNode(2);
    root->right = new BinaryTreeNode(3);
    root->left->left = new BinaryTreeNode(4);
    root->left->right = new BinaryTreeNode(5);
    root->right->left = new BinaryTreeNode(6);
    root->right->right = new BinaryTreeNode(7);
    printBinaryTree(root);

    return 0;
}
