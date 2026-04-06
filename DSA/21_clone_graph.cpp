#include <iostream>
#include <vector>
#include <unordered_map>
#include <queue>

class Node {
public:
    int val;
    std::vector<Node*> neighbors;
    Node(int x) : val(x) {}
};

Node* clone(Node *node, std::unordered_map<Node *, Node *> &gMap)
{
    if (!node)
        return nullptr;
    if (gMap.count(node))
        return gMap[node];
    Node *res = new Node(node->val);
    gMap.insert({node, res});
    for (auto &nNode : node->neighbors)
    {
        auto neighbour = clone(nNode, gMap);
        res->neighbors.push_back(neighbour);
    }
    return res;
}

Node* cloneGraph(Node* node) {
    std::unordered_map<Node*, Node*> gMap;
    return clone(node, gMap);
}

int main() {
    // Build graph: 1-2-3-4-1
    Node* n1 = new Node(1);
    Node* n2 = new Node(2);
    Node* n3 = new Node(3);
    Node* n4 = new Node(4);
    n1->neighbors = {n2, n4};
    n2->neighbors = {n1, n3};
    n3->neighbors = {n2, n4};
    n4->neighbors = {n3, n1};

    Node* cloned = cloneGraph(n1);

    // Verify clone is a deep copy
    std::cout << (cloned != n1) << "\n";           // Expected: 1 (different address)
    std::cout << cloned->val << "\n";              // Expected: 1
    std::cout << cloned->neighbors[0]->val << "\n"; // Expected: 2
    std::cout << cloned->neighbors[1]->val << "\n"; // Expected: 4

    return 0;
}