#include <iostream>
#include <vector>
#include <queue>

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

std::vector<std::vector<int>> bfs(TreeNode* root){
    std::vector<std::vector<int>> res;
    if(!root){
        return res;
    }
    std::queue<TreeNode*> treeQ;
    treeQ.push(root);
    while(!treeQ.empty()){
        int levelSize = treeQ.size();
        std::vector<int> level;
        for(int i = 0; i < levelSize; i++){
            auto temp = treeQ.front();
            treeQ.pop();
            if(temp->left) treeQ.push(temp->left);
            if(temp->right) treeQ.push(temp->right);
            level.push_back(temp->val);
        }
        res.push_back(level);
    }

    return res;
}

std::vector<int> rightSideView(TreeNode* root) {
    if(!root){
        return std::vector<int>{};
    }
    std::vector<int> ans;

    std::queue<TreeNode*> treeQ;
    treeQ.push(root);
    while(!treeQ.empty()){
        int levelSize = treeQ.size();
        std::vector<int> level;
        for(int i = 0; i < levelSize; i++){
            
            auto temp = treeQ.front();
            treeQ.pop();

            if(temp->left) treeQ.push(temp->left);
            if(temp->right) treeQ.push(temp->right);

            if(i == levelSize-1) {
                ans.push_back(temp->val);
            }
        }
    }

    return ans;
}

int main() {
    TreeNode* root1 = new TreeNode(1);
    root1->left = new TreeNode(2);
    root1->right = new TreeNode(3);
    root1->left->right = new TreeNode(5);
    root1->right->right = new TreeNode(7);

    for(auto n : rightSideView(root1))
        std::cout << n << " ";
    std::cout << "\n"; // Expected: 1 3 7

    // Single node
    TreeNode* root2 = new TreeNode(1);
    for(auto n : rightSideView(root2))
        std::cout << n << " ";
    std::cout << "\n"; // Expected: 1

    // Empty
    for(auto n : rightSideView(nullptr))
        std::cout << n << " ";
    std::cout << "\n"; // Expected: (empty)

    return 0;
}