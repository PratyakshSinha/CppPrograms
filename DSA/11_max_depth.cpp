#include <iostream>

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

int maxDepth(TreeNode* root) {
    if(!root){
        return 0;
    }
    if(root->left == nullptr && root->right == nullptr){
        return 1;
    }
    int leftLength = 1 + maxDepth(root->left);
    int rightLength = 1 + maxDepth(root->right);

    return std::max(leftLength, rightLength);
}

int maxDepthOneLiner(TreeNode* root){
    if(!root) return 0;
    return 1 + std::max(maxDepthOneLiner(root->left), maxDepthOneLiner(root->right));
}

int main() {
    // Tree 1: [3,9,20,null,null,15,7]
    TreeNode* root1 = new TreeNode(3);
    root1->left = new TreeNode(9);
    root1->right = new TreeNode(20);
    root1->right->left = new TreeNode(15);
    root1->right->right = new TreeNode(7);
    std::cout << maxDepthOneLiner(root1) << "\n"; // Expected: 3

    // Tree 2: single node
    TreeNode* root2 = new TreeNode(1);
    std::cout << maxDepthOneLiner(root2) << "\n"; // Expected: 1

    // Tree 3: empty tree
    std::cout << maxDepthOneLiner(nullptr) << "\n"; // Expected: 0

    return 0;
}