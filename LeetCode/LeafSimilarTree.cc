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
    
    void lvs(TreeNode* root, vector<int>& v){
        if(!root->left and !root->right)
        {
            v.push_back(root->val);
            return;
        }
        if(root->left)
            lvs(root->left, v);
        if(root->right)
            lvs(root->right, v);
    }

    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        //return true;
        vector<int> t1, t2;
        lvs(root1, t1);
        lvs(root2, t2);

        return t1==t2;
    }
};