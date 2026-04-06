#include <iostream>

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

int result = -1;

void inorder(TreeNode* root, int& k){
    if(!root) return;
    inorder(root->left, k);
    k--;
    if(k == 0){
        result = root->val;
        return;
    }
    inorder(root->right, k);
}

int kthSmallest(TreeNode* root, int k) {
    inorder(root, k);
    return result;
}

int main() {
    TreeNode* root1 = new TreeNode(3);
    root1->left = new TreeNode(1);
    root1->right = new TreeNode(4);
    root1->left->right = new TreeNode(2);
    std::cout << kthSmallest(root1, 1) << "\n"; // Expected: 1

    TreeNode* root2 = new TreeNode(5);
    root2->left = new TreeNode(3);
    root2->right = new TreeNode(6);
    root2->left->left = new TreeNode(2);
    root2->left->right = new TreeNode(4);
    root2->left->left->left = new TreeNode(1);
    std::cout << kthSmallest(root2, 3) << "\n"; // Expected: 3

    return 0;
}