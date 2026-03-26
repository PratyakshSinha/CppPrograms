#include <iostream>

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {

    if(root->val > p->val && root->val > q->val){
        return lowestCommonAncestor(root->left, p, q);
    }

    if(root->val < p->val && root->val < q->val){
        return lowestCommonAncestor(root->right, p, q);
    }

    return root;
}

int main() {
    TreeNode* root = new TreeNode(6);
    root->left = new TreeNode(2);
    root->right = new TreeNode(8);
    root->left->left = new TreeNode(0);
    root->left->right = new TreeNode(4);
    root->right->left = new TreeNode(7);
    root->right->right = new TreeNode(9);
    root->left->right->left = new TreeNode(3);
    root->left->right->right = new TreeNode(5);

    TreeNode* p1 = root->left;        // node 2
    TreeNode* q1 = root->right;       // node 8
    std::cout << lowestCommonAncestor(root, p1, q1)->val << "\n"; // Expected: 6

    TreeNode* p2 = root->left;        // node 2
    TreeNode* q2 = root->left->right; // node 4
    std::cout << lowestCommonAncestor(root, p2, q2)->val << "\n"; // Expected: 2

    return 0;
}