#include<bits/stdc++.h>
using namespace std;

//Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};


//[2,1,3]
//3
//1

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root->val>=p->val and root->val<=q->val)
            return root;
        
        if(root == p or root==q)
            return root;

        if(root->val > p->val and root->val > q->val)
            return lowestCommonAncestor(root->left, p, q);
        
        if(root->val < p->val and root->val < q->val)
            return lowestCommonAncestor(root->right, p, q);
    }
};