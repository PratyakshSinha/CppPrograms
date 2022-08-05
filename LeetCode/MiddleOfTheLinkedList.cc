#include<bits/stdc++.h>
using namespace std;


//  Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode *p1, *p2;
        while(p1 and p2)
        {
            if(p2 == NULL or p2->next == NULL)
            {
                return p1;
            }
            if(p2->next)
                p2 = p2->next->next;
            else
                p2 = p2->next;
            p1 = p1->next;
        }
        return p1;
    }
};