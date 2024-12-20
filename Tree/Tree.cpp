#include <iostream>
using namespace std;

  struct TreeNode {
    int data;
    TreeNode* firstChild;
    TreeNode* nextSibling;

    TreeNode(int d) {
        data = d;
        firstChild = nullptr;
        nextSibling = nullptr;
    }
};

void addChildToTree(TreeNode* parent, int data) {
    TreeNode* newNode = new TreeNode(data);
    if (parent->firstChild == nullptr) {
        parent->firstChild = newNode;
    } else {
        TreeNode* current = parent->firstChild;
        while (current->nextSibling != nullptr) {
            current = current->nextSibling;
        }
        current->nextSibling = newNode;
    }
}

void printTree(TreeNode* node, int depth = 0) {
    if (node == nullptr) return;

    for (int i = 0; i < depth; i++) {
        cout << "  "<<"->";
    }
    cout << node->data << endl;

    printTree(node->firstChild, depth + 1);
    printTree(node->nextSibling, depth);
}

int main() {
    // Create the root node
    TreeNode* root = new TreeNode(1);

    // Add children to the root
    addChildToTree(root, 2);
    addChildToTree(root, 3);
    addChildToTree(root, 4);

    // Add children to the first child of the root
    addChildToTree(root->firstChild, 5);
    addChildToTree(root->firstChild, 6);

    // Print the tree structure
    printTree(root);

    return 0;
}
