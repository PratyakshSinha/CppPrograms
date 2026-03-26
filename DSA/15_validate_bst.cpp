#include <iostream>
#include <climits>

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

bool isValidBST(TreeNode* root, long long leftLim = LLONG_MIN, long long rightLim = LLONG_MAX) {
    if(!root) 
        return true;

    if(root->val <= leftLim || root->val >= rightLim){
        return false;
    }

    return isValidBST(root->left, leftLim, root->val) && isValidBST(root->right, root->val, rightLim);
}

int main() {
    // Tree 1: valid BST
    TreeNode* root1 = new TreeNode(2);
    root1->left = new TreeNode(1);
    root1->right = new TreeNode(3);
    std::cout << isValidBST(root1) << "\n"; // Expected: 1

    // Tree 2: invalid BST
    TreeNode* root2 = new TreeNode(5);
    root2->left = new TreeNode(1);
    root2->right = new TreeNode(4);
    root2->right->left = new TreeNode(3);
    root2->right->right = new TreeNode(6);
    std::cout << isValidBST(root2) << "\n"; // Expected: 0

    // Tree 3: empty
    std::cout << isValidBST(nullptr) << "\n"; // Expected: 1

    return 0;
}