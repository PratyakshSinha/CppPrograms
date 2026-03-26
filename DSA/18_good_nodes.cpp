#include <iostream>
#include <climits>

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

int goodNodes(TreeNode* root, int parentVal = INT_MIN) {
    if(!root){
        return 0;
    }
    int count = root->val >= parentVal ? 1 : 0;
    return count + goodNodes(root->left, std::max(parentVal, root->val)) + goodNodes(root->right, std::max(parentVal, root->val));
}

int main() {
    TreeNode* root1 = new TreeNode(3);
    root1->left = new TreeNode(1);
    root1->right = new TreeNode(4);
    root1->left->left = new TreeNode(3);
    root1->right->left = new TreeNode(1);
    root1->right->right = new TreeNode(5);
    std::cout << goodNodes(root1) << "\n"; // Expected: 4

    // Single node
    TreeNode* root2 = new TreeNode(1);
    std::cout << goodNodes(root2) << "\n"; // Expected: 1

    return 0;
}