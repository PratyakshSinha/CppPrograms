#include <iostream>
#include <vector>
#include <queue>

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

std::vector<std::vector<int>> levelOrder(TreeNode* root) {
    std::queue<TreeNode*> q;
    std::vector<std::vector<int>> res;

    if(!root){
        return res;
    }

    q.push(root);
    while (!q.empty()) {
        int levelSize = q.size();
        std::vector<int> currLevelNodes;
        for(int i = 0; i < levelSize; i++){
            TreeNode* temp = q.front();
            q.pop();
            if(!temp) continue;
            currLevelNodes.push_back(temp->val);
            if(temp->left) q.push(temp->left);
            if(temp->right) q.push(temp->right);
        }
        res.push_back(currLevelNodes);
    }
    return res;
}

int main() {
    TreeNode* root1 = new TreeNode(3);
    root1->left = new TreeNode(9);
    root1->right = new TreeNode(20);
    root1->right->left = new TreeNode(15);
    root1->right->right = new TreeNode(7);

    for(auto& level : levelOrder(root1)){
        std::cout << "[ ";
        for(auto n : level) std::cout << n << " ";
        std::cout << "]\n";
    }
    std::cout << "---\n";

    // Empty tree
    for(auto& level : levelOrder(nullptr)){
        std::cout << "[ ";
        for(auto n : level) std::cout << n << " ";
        std::cout << "]\n";
    }

    return 0;
}