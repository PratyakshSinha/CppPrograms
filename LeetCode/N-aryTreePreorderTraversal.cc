#include<bits/stdc++.h>
using namespace std;

// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};


class Solution {
public:
    
    //Trivial Solution
    /* 
    vector<int> op;
    void dfs(Node* root)
    {
        if(!root)
            return;
        op.push_back(root->val);
        for(Node *it:root->children)
        {
            dfs(it);
        }
    }
    
    vector<int> preorder(Node* root) {
        dfs(root);
        return op;
    } 
    */

    vector<int> preorder(Node* root){
        stack<Node*> st;
        vector<int> op;
        if(!root) return op;

        st.push(root);
        while(!st.empty())
        {
            Node* curr = st.top();
            st.pop();
            op.push_back(curr->val);
            reverse(curr->children.begin(), curr->children.end());
            for(Node* it: curr->children)
            {
                st.push(it);
            }
        }

        return op;
    }

};