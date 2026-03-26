#include <iostream>

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

int maxDepth(TreeNode* root){
    if(!root) return 0;
    return 1 + std::max(maxDepth(root->left), maxDepth(root->right));
}

bool isBalanced(TreeNode* root) {
    if(!root){
        return true;
    }
    auto leftHeight = maxDepth(root->left);
    auto rightHeight = maxDepth(root->right);
    return (std::abs(leftHeight - rightHeight) <= 1) && isBalanced(root->left) && isBalanced(root->right);
}

int dfs(TreeNode* root){
    if(!root) {
        return 0;
    }
    int left = dfs(root->left);
    if(left == -1) return -1;

    int right = dfs(root->right);
    if(right == -1) return -1;

    if(std::abs(left - right) > 1) return -1;

    return 1+std::max(left, right);
}

bool isBalancedOptimal(TreeNode* root) {
    return dfs(root) != -1;
}

int main() {
    // Tree 1: balanced
    TreeNode* root1 = new TreeNode(3);
    root1->left = new TreeNode(9);
    root1->right = new TreeNode(20);
    root1->right->left = new TreeNode(15);
    root1->right->right = new TreeNode(7);
    std::cout << isBalanced(root1) << "\n"; // Expected: 1

    // Tree 2: not balanced
    TreeNode* root2 = new TreeNode(1);
    root2->left = new TreeNode(2);
    root2->right = new TreeNode(2);
    root2->left->left = new TreeNode(3);
    root2->left->right = new TreeNode(3);
    root2->left->left->left = new TreeNode(4);
    root2->left->left->right = new TreeNode(4);
    std::cout << isBalanced(root2) << "\n"; // Expected: 0

    // Tree 3: empty
    std::cout << isBalanced(nullptr) << "\n"; // Expected: 1

    return 0;
}