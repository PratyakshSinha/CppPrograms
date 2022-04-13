#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;
};

Node* createNode(int data){
    Node* newNode = new Node();
    newNode->data = data;
    newNode->left = newNode->right = nullptr;
    return newNode;
}

int main()
{
    //Level 1
    Node* root1 = createNode(1);
    //Level 2
    root1->left = createNode(2);
    root1->right = createNode(3);
    //Level 3
    root1->left->left = createNode(4);

    //Level 1
    Node* root2 = createNode(1);
    //Level 2
    root2->left = createNode(2);
    root2->right = createNode(3);
    //Level 3
    root2->left->left = createNode(4);
    root2->left->right = createNode(5);
    root2->right->left = createNode(6);
    root2->right->right = createNode(7);
    //Level 4
    root2->left->right->left = createNode(9);
    root2->right->right->left = createNode(15);
    

    cin.get();
}

/*
Tree 1

        1
    2       3
4

Tree 2

        1
    2       3
  4   5   6   7
     9       15   

*/