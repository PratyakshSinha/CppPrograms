#include <iostream>

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

void printTree(TreeNode* root) {
    if(!root) return;
    printTree(root->left);
    std::cout << root->val << " ";
    printTree(root->right);
}

TreeNode* invertTree(TreeNode* root) {
    if(!root) return nullptr;
    auto left = invertTree(root->left);
    auto right = invertTree(root->right);
    root->left = right;
    root->right = left;
    return root;
}

int main() {
    // Tree: [4,2,7,1,3,6,9]
    TreeNode* root = new TreeNode(4);
    root->left = new TreeNode(2);
    root->right = new TreeNode(7);
    root->left->left = new TreeNode(1);
    root->left->right = new TreeNode(3);
    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(9);

    printTree(root);
    std::cout << "\n"; // Before: 1 2 3 4 6 7 9

    invertTree(root);
    printTree(root);
    std::cout << "\n"; // After:  9 7 6 4 3 2 1

    return 0;
}