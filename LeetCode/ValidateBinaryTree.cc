#include<bits/stdc++.h>
using namespace std;

//Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
 
class Solution {
public:

    bool valid(TreeNode* root, int64_t left, int64_t right)
    {
        if(!root)
            return true;

        if(!(root->val < right and root->val > left))
            return false;

        return (valid(root->left, left, root->val) and valid(root->right, root->val, right));
    }

    bool isValidBST(TreeNode* root) {
        
        return valid(root, INT64_MIN, INT64_MAX);

    }
};