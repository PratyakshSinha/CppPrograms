//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int x){
        data = x;
        left = NULL;
        right = NULL;
    }
};


// } Driver Code Ends
/* A binary tree node


struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};
*/


   
class Solution
{
    public:
    //Function to check if two trees are identical.
    void inorder_traversal(Node* node,vector<int> &ans){
        if(node==NULL){
            return;
        }

        inorder_traversal(node->left,ans);
        ans.push_back(node->data);
        inorder_traversal(node->right,ans);
    }
    //Function to check if two trees are identical.
    bool isIdentical(Node* r1, Node *r2)
    {

        if (r1 == nullptr && r2 == nullptr) return true;
        if (r1 == nullptr || r2 == nullptr) return false;
        return r1->data == r2->data && isIdentical(r1->left, r2->left) && isIdentical(r1->right, r2->right);

        /*
        // vector <int> res1;
        // vector <int> res2;
        // inorrder_traversal(r1,res1);
        // inoder_traversal(r2,res2);
        // for(auto i: res1){
        //     cout<<res1[i]<<" ";
        // }
        // for(auto i: res2){
        //     cout<<res2[i]<<" ";
        // }
        // if(res1!=res2){
        //     return false;
        // }
        // return true;
        // for(int i=0;i<res1.size();i++){
        //     if(res1[i]!=res2[i]){
        //         return false;
        //     }
        // }
        */

        // return true;
        //Your Code here
    }
};

//{ Driver Code Starts.

// Function to Build Tree
Node *buildTree(string str) {
    // Corner Case
    if (str.length() == 0 || str[0] == 'N')
        return NULL;

    // Creating vector of strings from input
    // string after spliting by space
    vector<string> ip;

    istringstream iss(str);
    for (string str; iss >> str;)
        ip.push_back(str);

    // Create the root of the tree
    Node *root = new Node(stoi(ip[0]));

    // Push the root to the queue
    queue<Node *> queue;
    queue.push(root);

    // Starting from the second element
    int i = 1;
    while (!queue.empty() && i < ip.size()) {

        // Get and remove the front of the queue
        Node *currNode = queue.front();
        queue.pop();

        // Get the current node's value from the string
        string currVal = ip[i];

        // If the left child is not null
        if (currVal != "N") {

            // Create the left child for the current node
            currNode->left = new Node(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->left);
        }

        // For the right child
        i++;
        if (i >= ip.size())
            break;
        currVal = ip[i];

        // If the right child is not null
        if (currVal != "N") {

            // Create the right child for the current node
            currNode->right = new Node(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }

    return root;
}

int main() {
    int tc;
    scanf("%d ", &tc);
    while (tc--) {
        string str, str1;
        getline(cin, str);
        Node *rootA = buildTree(str);
        getline(cin, str1);
        Node *rootB = buildTree(str1);
        Solution ob;
        if (ob.isIdentical(rootA, rootB)) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }
    return 0;
}
// } Driver Code Ends